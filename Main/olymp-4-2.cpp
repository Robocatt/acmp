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
    long long n;
    cin >> n;
    cout << fixed << setprecision(10) << 1 + 0.6 * (1 - pow(4.0 / 9, n - 1));

    return 0;
}