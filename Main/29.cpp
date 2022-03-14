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
    int n;
    cin >> n;
    vector<int> arr(n + 1), dp(n + 1);
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }
    dp[0] = dp[1] = 0;
    dp[2] = abs(arr[2] - arr[1]);
    for(int i = 3; i < arr.size(); i++){
        dp[i] = min(dp[i - 1] + abs(arr[i] - arr[i - 1]), dp[i - 2] + 3 * abs(arr[i] - arr[i - 2]));
    }
    cout << dp.back();

    return 0;
}