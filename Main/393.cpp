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
    cout << (((n * n + 1) / 2) - 1) / 9 * 10 + (((n * n + 1) / 2) - 1) % 9 + 1;
    return 0;
}