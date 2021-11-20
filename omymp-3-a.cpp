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
    long long n, k,m;
    cin >> n >> k >> m;
    long long p = 1;
    long long mp = 2;
    k+=10;
    while(k > mp){
        mp*=2;
        p++;
    }
    long long x = n * p;
    cout << int(ceil(x / 8.0)) * m;
    return 0;
}