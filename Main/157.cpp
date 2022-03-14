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
ll fact(ll n){
    if(n == 0 || n == 1){
        return 1;
    }
    return n * fact(n - 1);
}

int main(){
    string s;
    cin >> s;
    map<char,int> mp;
    for(int i = 0; i < s.size(); i++){
        mp[s[i]]++;
    }    
    ll ans = fact(s.size());
    for(auto pa : mp){
        ans /= fact(pa.second);
    }
    cout << ans;


    return 0;
}