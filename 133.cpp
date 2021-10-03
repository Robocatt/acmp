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
    int n,m;
    cin >> n;
    vector<vector<pair<int,int>>> graph(n);
    vector<int> price(n);
    for(int i = 0; i < n; i++){
        cin >> price[i];
    }
    cin >> m;
    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        graph[a].push_back({b,price[b]});
        graph[b].push_back({a,price[a]});
    }

    int s = 0;
    int f = n - 1;
    const int INF = 2000000;
    vector<int> d(n, INF);
    vector<bool> u(n,false);
    d[s] = price[0];
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
            }
        }


    }
    if(d[f] == INF){
        cout << -1;
    }else{
        cout << d[f] - price[n - 1];
    }
    

    return 0;
}