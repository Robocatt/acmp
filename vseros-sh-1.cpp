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
    int n,k;
    cin >> n >> k;
    cout << 2 * n * (n / k - 1);

    return 0;
}