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
            if(i != j && x > 0){
                graph[i].push_back({j,x});
            }
        }
    }
    s--;
    f--;
    const int INF = 2000000;
    vector<int> d(n, INF);
    vector<bool> u(n,false);
    d[s] = 0;
    for(int i = 0; i < n; i++){
        int v = -1;
        for(int j = 0; j < n; j++){
            if(!u[j] && (v == -1 || d[j] < d[v])){
                v = j;
            }
        }
        if(d[v] == INF){
            break;
        }
        u[v] = true;
        for(int j = 0; j < graph[v].size(); j++){
            int to = graph[v][j].first, len = graph[v][j].second;
            if(d[v] + len < d[to]){
                d[to] = d[v] + len;
            }
        }


    }
    if(d[f] == INF){
        cout << -1;
    }else{
        cout << d[f];
    }
    return 0;
}