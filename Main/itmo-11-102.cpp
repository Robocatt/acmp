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

void printarr(vector<vector<int>> & arr){
    for(int i = 0; i < 11; i++){
        for(int j = 0; j < 11; j++ ){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}


vector<vector<int>> ans(11,vector<int> (11,0));
vector<vector<int>> field(11,vector<int> (11,0));

bool f(int n){

  vector<vector<int>> arr(11,vector<int> (11));
  arr = field;
  
  int p = 0;
  for (int d = 2; d < 13; d++){
    int z = n;

    while(z % d == 0){
      int t = arr[0][p];
      for(int i = 1; i < 11; i++){
        arr[i - 1][p] = arr[i][p];
      }
      arr[10][p] = t;
      z = z / d;
    } 

    p++;
  }

    printarr(arr);

  return arr == ans;
}


int main() {

  for(int i = 0; i < 5; i++){
    for(int j = 0; j < 11; j++){
      field[i][j] = 0;
    }
  }
  for(int j = 0; j < 11; j++){
    field[5][j] = 1;
  }
  for(int i = 6; i < 11; i++){
    for(int j = 0; j < 11; j++){
      field[i][j] = 0;
    }
  }


  ans[0][0]=1;
  ans[2][5]=1;
  ans[3][2]=1;
  ans[3][3]=1;
  ans[3][8]=1;
  ans[3][9]=1;
  ans[4][6]=1;
  ans[5][1]=1;
  ans[5][4]=1;
  ans[5][7]=1;
  ans[5][10]=1;

  for(int i = 33202400; i < 33202420; i++){
    if(f(i)){
      cout << i;
      break;
    }
  }



  return 0;
}