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
    unsigned long long a,b;
    cin >> a >> b;
    unsigned long long l = 0;
    unsigned long long r = INT32_MAX;
    while(r - l > 1){
        unsigned long long m = (r + l) / 2;
        unsigned long long p = a * m;
        unsigned long long mi = (2 * b + m - 1) * m / 2;
        if(p >= mi){
            l = m;
        }else{
            r = m;
        }
    }
    cout << r;


    return 0;
}