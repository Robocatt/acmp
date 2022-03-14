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
    int n, m, k;
    cin >> n >> m >> k;
    cout << (m / k + min(k - 1, m)) * n;

    return 0;
}