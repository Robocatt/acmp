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
comp(pair<int,int> a, pair<int,int> b){
    if (a.first == b.first){
        return a.second < b.second;
    }
    return a.first < b.first;
}



int main(){
    int n, m;
    cin >> n >> m;
    vector<pair<int,int>> arr;
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        arr.push_back({a,b});
    }
    sort(arr.begin(),arr.end(),comp);
    for(int i = 0; i < n; i++){
        


    }
    

    return 0;
}