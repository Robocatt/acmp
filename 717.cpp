#define _USE_MATH_DEFINES
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <set>
#include <math.h>
#include <map>
#include <unordered_map>
#include <limits.h>
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <unordered_set>
#include <sstream>
#include <deque>
#include <time.h>
#include <queue>
#include <iomanip>

using namespace std;

typedef long long ll;
typedef long double ld;


long long dfs(vector<vector<int>> &graph, int v, vector<long long> &times, vector<int> &ans){
  if(times[v] == -1){
    return 0;
  }
	
  long long summ = 0;
	for(int u : graph[v]){
    summ += dfs(graph, u, times, ans);
  }
	
  summ += times[v];
  times[v] = -1;  
  ans.push_back(v);

  return summ;
}


int main() {
  int n;
  cin >> n;
  vector<long long> times(n + 1);
  vector<int> ans;
  vector<vector<int>> graph(n + 1);
  for(int i = 1; i <= n; i++){
    cin >> times[i];
  }
  for(int i = 1; i <= n; i++){
    int k;
    cin >> k;
    for(int j = 0; j < k; j++){
      int x;
      cin >> x;
      graph[i].push_back(x);
    }
  }
  cout << dfs(graph, 1, times, ans);
  cout << " " << ans.size() << endl;
  for(int i = 0; i < ans.size(); i++){
    cout << ans[i] << " ";
  }
  

}
