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

int bfs(vector<vector<pair<int,int>> > graph, int s,int too){
    int n = graph.size() - 1;
    queue<int> q;
    q.push(s);
    vector<bool> used (n);
    vector<int> d (n), p (n);
    used[s] = true;
    p[s] = -1;
    while(!q.empty()){
        int v = q.front();
        q.pop();
        for(int i = 0; i < graph[v].size(); i++){
            pair<int,int> to = graph[v][i];
            if(!used[to.first]){
                used[to.first] = true;
                q.push(to.first);
                d[to.first] = d[v] + 1;
                p[to.first] = v; 
            }
        }
    }
    vector<int> path;
    for(int v = too; v!= -1; v = p[v]){
        path.push_back(v);
    }
    reverse(path.begin(), path.end());
    long long summ;
    for(int i = 0; i < path.size(); i++){
        graph[path[i]]


    }
}


int main(){
    vector<vector<pair<int,int>> > graph(2); // вершина, int - кол-во секунд
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        char c;
        int v1, v2;
        cin >> c >> v1 >> v2;
        if(c == '!'){
            if(graph.size() - 1 >= v1){
                graph[v1].push_back({v2,0});
            }else{
                vector<pair<int,int>> arr = {{v2,0}};
                graph.push_back(arr);
            }
        }
        else if(c == '?'){

        }








    }

    

    return 0;
}