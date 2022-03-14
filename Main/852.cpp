#include<iostream>
#include<iomanip>
#include<vector>
#include<set>
#include<queue>
#include<deque>
#include<map>
#include<algorithm>
#include<stack>
#include<string>
using namespace std;
bool isvalid(string &s){
    stack<string> open;
    int i = 0;
    if(s[i] != '<' || s[s.size() - 1] != '>'){
        return false;
    }
    while(true){
        if(i == s.size()){
            break;
        }
        if(s[i] != '<'){//<
            return false;
        }
        i++;
        bool slash = false;
        if(s[i] == '/'){//</
            slash = true;
            i++;
        }
        if(!('a' <= s[i] && s[i] <= 'z')){//<a;</a
            return false;
        }
        string tag(1, s[i]); 
        i++;
        while('a' <= s[i] && s[i] <= 'z'){
            tag.push_back(s[i]);//<aaaaaaaa
            i++;
        }
        if(s[i] != '>'){//<aaaaaa?
            return false;
        }
        i++;
        if(!slash){
            open.emplace(tag);//add to stack
        }else{
            if(open.empty()){
                return false;
            }
            if(open.top()!= tag){
                return false;
            }
            open.pop();
        }
    }
    return open.empty();
}



int main(){
    string s;
    getline(cin,s);
    string ch ="</>";
    for (char i = 'a'; i <= 'z'; i++){
        ch += i;
    }
    for(char &c : s){
        char old = c;
        for(int j = 0; j < ch.size(); j++){
            if(ch[j] != old){
                c = ch[j];
                if(isvalid(s)){
                    cout << s;
                    return 0;
                }
            }
        }
        c = old;
    }

    return 0;
}