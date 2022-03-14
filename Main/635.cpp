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

bool comp (vector<int> a, vector<int> b){
    if (a[1] == b[1]){
        return a[2] < b[2];
    }
    return a[1] > b[1];
}

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> base;
    for(int i = 0; i < n; i++){
        int id, s, t;
        cin >> id >> s >> t;
        if(s > 0){
            base.push_back({id,s,t});
        }
    }
    vector<int> ans;
    for(int i = 0; i < m; i++){
        int id, s, t;
        cin >> id >> s >> t;
        if(s > 0){
            ans.push_back(id);
        }
    }

    sort(base.begin(),base.end(), comp);
    int k = base.size() / 2 - 1;
    
    for(int i = 0; i < base.size(); i++){
        if (base[i][1] > base[k][1] || base[i][1] == base[0][1]){
            ans.push_back(base[i][0]);
        }
    }

    cout << ans.size() << endl;
    sort(ans.begin(),ans.end());
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }

    return 0;
}