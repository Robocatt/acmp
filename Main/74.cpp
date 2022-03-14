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


int main(){
    int n, m;
    cin >> n >> m;
    if(m == 1){
        cout << n;
        return 0;
    }
    int ans = 0;
    int l = 0;
    while(n > 1){
        if(m % 2 == 0){
            cout << l + m / 2;
            return 0;
        }else{
            m = m / 2 + 1;
            l = l + n / 2;
            if(n % 2 == 0){
                n /= 2;
            }else{
                n = n / 2 + 1;
            }
        }
    }



    return 0;
}