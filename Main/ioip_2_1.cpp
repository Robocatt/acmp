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

bool comp(int a, int b){
    return a > b;
}

int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end(), comp);
    vector<int> a;
    a.insert(arr[0]);
    for(int i = 1; i < n; i++){
        auto p = lower_bound(a.begin(), a.end(),2 + arr[i]);
        if(p == a.end()){
            a.insert(arr[i]);
        }else{
            a.erase(p);
            a.insert(arr[i]);
        }
    }
    cout << a.size();

    return 0;
}