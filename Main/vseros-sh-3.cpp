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
    long long s, e, n;
    cin >> s >> e >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    long long min_st = INT32_MAX, min_fi = INT32_MAX;
    for(int i = 0; i < n; i++){
        min_st = min(min_st, abs(arr[i] - s));
        min_fi = min(min_fi, abs(arr[i] - e));
    }
    cout << min(abs(s - e), min_fi + min_st + 1);

    return 0;
}