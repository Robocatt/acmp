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
    int n, dt;
    cin >> n >> dt;
    map<string,vector<int>> mp;
    for(int i = 0; i < n; i++){
        int a, b;
        char tmp;
        string name, cond;
        cin >> a >> tmp >> b;
        int cur_t = 60 * a + b;
        cin >> name >> cond;
        if(cond == "in"){
            mp[name].push_back(cur_t);
        }
    }
    vector<string> ans;
    for(auto p : mp){
        if(p.second.size() > 1){
            for(int i = 1; i < p.second.size(); i++){
                int cur_d = p.second[i] - p.second[i - 1];
                if(cur_d < dt){
                    ans.push_back(p.first);
                    break;
                }
            }
        }
    }
    sort(ans.begin(),ans.end());
    cout << ans.size() << endl;
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << endl;
    }


    return 0;
}