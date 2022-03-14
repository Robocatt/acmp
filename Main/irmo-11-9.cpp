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

bool f(int m){
  int r = 0;
  int n = 1;
  int t = 0;
  int c = 8;
  while(m != 0){
    t = m/ c;
    m %= c;
    r+=m*n;
    n*=10;
    m=t;
  }
  return r == 31211;
}


int main() {
  
  for(int i = 0; i < 100000;i++){
    if(f(i)){
      cout << i;
      break;
    }
  }



  return 0;
}