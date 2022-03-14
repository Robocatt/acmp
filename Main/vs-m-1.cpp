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
    long long n, a, b;
    cin >> n >> a >> b;
    long long l = 0;
    long long r = (a + 3 * b) / n + 2;
    while(r - l > 1){
        long long m = (l + r) / 2;
        long long c3 = (n / 3) * m;
        long long c = n % 3 * m;
        if(a > c){
            c3 -= (a - c) / 3;
        }  
        if(c <= a && c3 <= b){
            l = m;
        }else{
            r = m;
        }
    }
    cout << l;
    

    return 0;
}