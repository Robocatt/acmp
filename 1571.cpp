#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
#include <stdio.h>

using namespace std;

typedef long long ll;

bool check_row(int i, long long delta, vector<vector<long long>> &arr){
  for(int j = 1; j < arr[i].size(); j++){
    if( arr[i][j] - arr[i][j - 1] != delta){
      return false;
    }
  }
	return true;
}
bool check_column(int j, long long delta, vector<vector<long long>> &arr){
  for(int i = 1; i < arr.size(); i++){
    if( arr[i][j] - arr[i-1][j] != delta){
      return false;
    }
  }
	return true;
}


int main() {
	int n,m;
  cin.tie(0);
  cout.tie(0);
  ios_base::sync_with_stdio(0);
  cin >> n >> m;
  vector<vector<long long>> arr(n,vector<long long> (m));
  for (int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      cin >> arr[i][j];
    }
  }
  if (n == 1 && m == 1){
    cout << "true";
    return 0;
  }
  if (m == 1){
    long long delta_column_start = arr[1][0] - arr[0][0];
    if (delta_column_start <= 0 || arr[0][0] % delta_column_start != 0){
      cout << "false";
      return 0;
    }
    for (int j = 0; j < m; j++){
      if (!check_column(j,delta_column_start + j, arr)){
        cout << "false";
        return 0;
      }
    }
    cout << "true";
    return 0;
  }
  if (n == 1){
    long long delta_row_start = arr[0][1] - arr[0][0];
    if (delta_row_start <= 0 || arr[0][0] % delta_row_start != 0){
      cout << "false";
      return 0;
    }
    for (int i = 0; i < n; i++){
      if (!check_row(i, delta_row_start + i, arr)){
        cout << "false";
        return 0;
      }
    }
    cout << "true";
    return 0;
  }
  long long delta_row_start = arr[0][1] - arr[0][0];
  long long delta_column_start = arr[1][0] - arr[0][0];
  if (delta_row_start <= 0 || delta_column_start <= 0 || delta_row_start * delta_column_start != arr[0][0]){
    cout << "false";
    return 0;
  }
  for (int i = 0; i < n; i++){
    if (!check_row(i, delta_row_start + i, arr)){
      cout << "false";
      return 0;
    }
  }
  for (int j = 0; j < m; j++){
    if (!check_column(j, delta_column_start + j, arr)){
      cout << "false";
      return 0;
    }
  }
  cout << "true";




    return 0;
}
