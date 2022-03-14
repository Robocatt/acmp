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
typedef long long ll;
using namespace std;
vector<vector<int>> ans(11,vector<int> (11,0));

bool f(int n){

  vector<vector<int>> arr(11,vector<int> (11));
  for(int i = 0; i < 5; i++){
    for(int j = 0; j < 11; j++){
      arr[i][j] = 0;
    }
  }
  for(int j = 0; j < 11; j++){
    arr[5][j] = 1;
  }
  for(int i = 6; i < 11; i++){
    for(int j = 0; j < 11; j++){
      arr[i][j] = 0;
    }
  }
  
  int p = 0;
  for (int d = 2; d < 13; d++){
    int z = n;

    while(z % d == 0){
      int t = arr[0][p];
      for(int i = 1; i < 11; i++){
        arr[i - 1][p] = arr[i][p];
      }
      arr[10][p] = t;
      z/=d;
    } 
    p++;
  }
  /*for(int i = 0; i < 11; i++){
    for(int j = 0; j < 11; j++ ){
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
  cout << endl;*/
  return arr == ans;
}


int main() {
  ans[2][2]=1;
  ans[2][3]=1;
  ans[2][8]=1;
  ans[3][1]=1;
  ans[3][4]=1;
  ans[3][6]=1;
  ans[3][10]=1;
  ans[4][5]=1;
  ans[5][9]=1;
  ans[4][7]=1;
  ans[10][0]=1;
  
  for(int i = 1; i < 3;i++){
    if(f(i)){
      cout << i;
      break;
    }
  }



  return 0;
}