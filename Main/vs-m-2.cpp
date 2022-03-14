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
typedef long long ll;
int f(ll x, ll y, ll k, ll a, ll b, ll c, ll d){
    if(abs(x) > k || abs(y) > k){
        return 0;
    }
    y += a;
    if(y >= k){
        return a - y + k; 
    }
    x += b;
    if(x >= k){
        return a + b - x + k;
    }
    y -= c;
    if(y <= -k){
        return a + b + c - (- y - k);
    }
    x -= d;
    if(x <= - k){
        return a + b + c + d - (-x - k);
    }
    return -100;
}


int main(){
    ll a, b, c, d, k ;
    cin >> a >> b >> c >> d >> k;
    ll dy = a - c;
    ll dx = b - d;
    
    if(f(0,0,k,a,b,c,d) != -100){itm
        cout << f(0,0,k,a,b,c,d);
        return 0;
    }

    ll l = 0;
    ll r = INT32_MAX;
    while(r - l > 1){
        ll m = (l + r) / 2;
        if (f(dx * m, dy * m, k,a,b,c,d) == -100 ){
            l = m;
        }else{
            r = m;
        }
    }
    cout << (r * (a + b + c + d) + f(r * dx, r * dy,k,a,b,c,d));

    

    return 0;
}