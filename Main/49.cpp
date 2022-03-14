#define _USE_MATH_DEFINES
#include<iostream>
#include<fstream>
#include<vector>
#include<queue>
#include<deque>
#include<set>
#include<map>
#include<string>
#include<utility>
#include<cmath>
#include<algorithm>
typedef unsigned long long ul;
typedef long long ll;
using namespace std;
map<char,string> mp = {{'a',"0123"}, {'b',"1234"}, {'c',"2345"}, {'d',"3456"}, 
{'e',"4567"}, {'f',"5678"}, {'g',"6789"}, {'?',"0123456789"} };

int count_co(char c1, char c2){
    if(c1 == c2){
        if(isdigit(c1)){
            return 1;
        }else if(c1 == '?'){
            return 10;
        }else{
            return 4;
        }
    }

    if(isdigit(c1)){
        if(isdigit(c2)){
            return 0;
        }else{
            if(mp[c2].find(c1) != string::npos){
                return 1;
            }else{
                return 0;
            }
        }
    }

    if(isdigit(c2)){
        if(mp[c1].find(c2) != string::npos){
            return 1;
        }else{
            return 0;
        }
    }
    int count = 0;
    for(int i = 0; i < mp[c1].size(); i++){
        if(mp[c2].find(mp[c1][i]) != string::npos){
            count++;
        }
    }
    return count;

}


int main(){
    string s1, s2;
    cin >> s1 >> s2;
    int ans = 0;
    for(int i = 0; i < s1.size(); i++){
       int cur = count_co(s1[i], s2[i]);
       if(ans == 0 && cur != 0){
           ans = cur;
       }else{
           ans *= cur;
       }
    }
    cout << ans;

    return 0;
}