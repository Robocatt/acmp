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
    int n, m, p, r;
    cin >> n >> m;
    p = n + m;
    while (n > 0) {
        r = m % n;
        m = n;
        n = r;
    }
    cout << p - m;
    

    return 0;
}