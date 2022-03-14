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
    int n, maxnum, last;
    cin >> n >> maxnum >> last;
    string s;
    cin >> s;
    s.insert(0," ");
    long long mod = 1;
    for(int i = 0; i < last; i++){
        mod *= 10;
    }
    vector<long long> count(n + 1, 0);
    count[0] = 1;
    for(int i = 1; i <= n; i++){
        for(int j = max(1, i - 8); j <= i; j++){
            if(i == j || s[j] != '0'){
                int ll = 0;
                for(int k = j; k <= i; k++){
                    ll = ll * 10 + (s[k] - '0');
                }
                if(ll <= maxnum){
                    count[i] += count[j - 1];
                }
            }
        }
        count[i] %= mod;
    }
    cout << count[n];
    return 0;
}