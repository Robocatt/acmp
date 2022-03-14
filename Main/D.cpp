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
    int n,m,k;
    cin >> n >> m >> k;
    vector < vector<pair<int,int>> > graph(n + 1); 
    int ans = -1;
    for(int i = 0; i < m; i++){
        int a, b, c;
        cin >> a >> b >> c;
        graph[a].push_back({b,c});
        graph[b].push_back({a,c});
    }  
    //s - в цикл
    for(int s = 1; s <= n; s++){
        //int s = 1;
        queue<int> q;
        q.push(s);
        vector<bool> used (n);
        vector<int> d (n + 1), p (n + 1);
        used[s] = true;
        p[s] = -1;
        d[s] = 0;
        while (!q.empty()) {
            int v = q.front();
            q.pop();
            for (int i = 0; i < graph[v].size(); i++) {
                int to = graph[v][i].first;
                if (!used[to]) {
                    used[to] = true;
                    q.push(to);
                    d[to] = d[v] + graph[v][i].second;
                    p[to] = v;
                }
            }
        }
        int count_cur = 0;
        for(int j = 1; j < d.size(); j++){
            if(j != s && d[j] > 0){
                count_cur++;
            }
        }
        if(count_cur >= k){
            sort(d.begin(),d.end());
            reverse(d.begin(),d.end());
            if(d[k - 1] > ans){
                ans = d[k - 1];
            }
        }
    }
    cout  << ans;



    return 0;
}