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
    cin >> n >> m;
    vector<vector<pair<int,int>>> graph(n);
    vector<vector<int>> field(n + 2,vector<int> (m + 2, false));
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> field[i][j];
        }
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(!field[i][j]){
                if(!field[i + 1][j + 1]){
                    graph[i].push_back({})
                }
                if(!field[i + 1][j - 1]){
                    
                }
                if(!field[i - 1][j + 1]){
                    
                }
                if(!field[i - 1][j - 1]){
                    
                }

            }
        }
    }
    



    

    return 0;
}