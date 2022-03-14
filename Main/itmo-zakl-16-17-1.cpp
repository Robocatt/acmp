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

string from_fouth(string s){
    string res;
    char c = '0';
    if(s.size() % 2 != 0){
        c = s[0];
        s.erase(0,1);
    }
    map<int,char> mp = {{10,'A'}, {11, 'B'}, {12, 'C'}, {13, 'D'}, {14, 'E'}, {15, 'F'}};
    for(int i = s.size() - 1; i > 0; i-=2){
        int cur = s[i] - '0' + 4 * (s[i - 1] - '0');
        if(cur > 9){
            res.push_back(mp[cur]);
        }else{
            res.push_back(cur + '0');
        }
    }
    if(c != '0'){
        res.push_back(c);
    }
    reverse(res.begin(), res.end());
    return res;
}

string to_fouth(int x){
    string s;
    while(x > 0){
        s.push_back(x % 4 + '0');
        x /= 4;
    }
    reverse(s.begin(), s.end());
    return s;
}

int main(){
    string s;
    for(int i = 1; i < 1024; i++){
        s += to_fouth(i);
    }
    string ans = from_fouth(s);

    cout << ans[59] << " " << ans[999];
    return 0;
}