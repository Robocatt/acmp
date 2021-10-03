#include<iostream>
#include<iomanip>
#include<vector>
#include<set>
#include<queue>
#include<deque>
#include<map>
#include<algorithm>
using namespace std;

int main(){
    int n,s,f;
    cin >> n >> s >> f;
    vector<vector<pair<int,int>>> graph(n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            int x;
            cin >> x;
            if(i != j && x >= 0){
                graph[i].push_back({j,x});
            }
        }
    }
    s--;
    f--;
    const int INF = 2000000;
    vector<int> d(n, INF);
    vector<int> p(n);
    vector<bool> u(n,false);
    d[s] = 0;
    set<pair<int,int>> se;
    se.insert({d[s],s});
    while(!se.empty()){
        int v = (*se.begin()).second;
        se.erase(se.begin());
        for(int j = 0; j < graph[v].size(); j++){
            int to = graph[v][j].first, len = graph[v][j].second;
            if(d[v] + len < d[to]){
                se.erase({d[to],to});
                d[to] = d[v] + len;
                se.insert({d[to],to});
                p[to] = v;
            }
        }


    }
    if(d[f] == INF){
        cout << -1;
    }else{
        vector<int> path;
        for(int v = f; v != s; v = p[v]){
            path.push_back(v);
        }
        path.push_back(s);
        reverse (path.begin(), path.end());
        for(int i = 0; i < path.size(); i++){
            cout << path[i] + 1 << " ";
        }
    }
    

    return 0;
}