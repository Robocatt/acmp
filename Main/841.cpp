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

int main() {
    long long n, m, k = 2;
    cin >> n;
    if (n == 0){ 
        cout << 1; 
        return 0; 
    }
    if (n == 1){ 
        cout << 2;
        return 0;
    }
    m = 2;
    for (int i = 2; i <= n; i++) {
        k += m;
        m += 2;
    }
    cout << k;
    
    return 0;
}