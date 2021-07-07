#include <iostream>
#include <vector>
using namespace std;
 
 
 
int main(){
  int n, k;
  cin >> n >> k;
  vector<vector<int>> dp(76, vector<int> (k + 1, 0));
  dp[0][0] = 1;
  for(int j = 1; j < k + 1; j++){
    for(int i = 1; i < 75; i++ ){
      dp[i][j] = dp[i - 1][j - 1] + dp[i + 1][j - 1];
    }
  }
  cout << dp[n][k];
}