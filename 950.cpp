#include<iostream>
#include<iomanip>
#include<vector>
#include<set>
#include<queue>
#include<deque>
#include<map>
#include<algorithm>
#include<cmath>
#include<string>
using namespace std;

int main(){
    string s,ans;
    cin >> s;
    if(s[0]=='1'){
        ans.push_back('a');
        s.erase(s.begin());
    }
    int count = 0;
    for(int i = 0; i < s.size();i++){
        if(s[i] == '0'){
            count ++;
        }else{
            ans.push_back(count + 'a');
            count = 0;
        }
    }

    

    return 0;
}