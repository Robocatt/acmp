#include <iostream>
#include <vector>
#include <queue>
using namespace std;
void bfs(int i, int j,vector<vector<char>> &arr,vector<vector<bool>> &used  ){
    queue <pair<int,int>> q;
    q.push({i,j});
    used[i][j] = true;
    
    while (!q.empty()){
        pair<int, int> p = q.front();
        q.pop();
        if(arr[p.first + 1][p.second] == '0' && !used[p.first + 1][p.second]){
      q.push({p.first + 1, p.second});
      used[p.first + 1][p.second] = true;
    }
     
    if(arr[p.first][p.second + 1] == '0' && !used[p.first][p.second + 1]){
      q.push({p.first, p.second + 1});
      used[p.first ][p.second + 1] = true;
    }
 
    if(arr[p.first - 1][p.second] == '0' && !used[p.first - 1][p.second]){
      q.push({p.first - 1, p.second});
      used[p.first - 1][p.second] = true;
    }
     
    if(arr[p.first][p.second - 1] == '0' && !used[p.first][p.second - 1]){
      q.push({p.first, p.second - 1});
      used[p.first][p.second - 1] = true;
    }
 
  }
 
 
}
 
int main()
{
  int n, m, count = 0;
  cin >> n >> m;
  vector<vector<char>> arr(n + 2, vector<char> (m + 2, '1'));
  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= m; j++){
      cin >> arr[i][j];
    }
  }
  vector<vector<bool>> used (n + 2,vector<bool> (m + 2,false));
  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= m; j++){
      if(arr[i][j] == '0' && !used[i][j]){
        bfs(i,j,arr,used);
        count++;
      }
    }
  }
 
  cout << count;
 
 
    return 0;
}