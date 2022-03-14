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

map<ll,ll> mp;

ll rec(ll n){
    if(mp.find(n) != mp.end()){
      return mp[n];
    }
    if (n < 3){
			return 0;
		}
    if(n == 3){
        return 1ll;
    }
    mp[n] = rec(n / 2) + rec(n - n / 2);
		return mp[n];    
}

int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    ll n;
    cin >> n;
    cout << rec(n);


    return 0;
}