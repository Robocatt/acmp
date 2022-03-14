#include<iostream>
#include<vector>
#include<queue>
using namespace std;
 
 
int main(){
    int n, s,count = 0;
    cin >> n >> s;
    vector<vector<int>> graph(n,vector<int> (n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> graph[i][j];
        }
    }
    int count = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            for(int k = 0; k < n; k++){
                graph[j][k] = min( graph[j][k] , graph[j][i] + graph[i][k] );
            }
        }
    }
    for(int i = 1; i <= n; i++){
        if(graph[s][i]){
            count ++;
        }
    }
    cout << count - 1;
 
 
    return 0;
}