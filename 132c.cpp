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
    s--;
    f--;
    const int INF = 2000000;
    vector<vector<int>> graph(n,vector<int> (n,INF));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            int x;
            cin >> x;
            if(i == j){
                graph[i][j] = 0;
            }else if(x != -1){
                graph[i][j] = x;
            }
        }
    }

    for(int k = 0; k < n; k++){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                graph[i][j] = min(graph[i][j],graph[i][k]+graph[k][j]);
            }
        }
    }
    if(graph[s][f] == INF){
        cout << -1;
    }else{
        cout << graph[s][f];
    }

    return 0;
}