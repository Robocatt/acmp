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
bool comp(pair<int,int> &a, pair<int,int> &b){
    return a.second > b.second;
}

int main(){
    int k, m;
    cin >> k >> m;
    vector<pair<int,int>> arr(m);
    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        arr[i] = {a,b};
    }
    sort(arr.begin(),arr.end(), comp);
    int cur = k;
    for(auto i : arr){
        if(i.first == cur){
            cur++;
        }else if(i.first + 1 == cur){
            cur--;
        }
    }
    cout << cur;
    return 0;
}