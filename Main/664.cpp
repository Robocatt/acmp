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
    int k, m, n;
    cin >> k >> m >> n;
    cout << max(2, (n * 2 + k - 1) / k ) * m;

    return 0;
}