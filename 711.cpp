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
    int n,m;
    cin >> n >> m;
    vector<pair<int,string>> arr;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        int cur = 0;
        for(int j = 0; j < m; j++){
            int now;
            cin >> now;
            cur+=now;
        }
        arr.push_back({cur,s});
    }
    sort(arr.begin(),arr.end());
    cout << arr[0].second;

    return 0;
}