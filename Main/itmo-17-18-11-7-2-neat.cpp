#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <set>
#include <math.h>
#include <map>
#include <limits.h>
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <unordered_set>
#include <unordered_map>
#include <sstream>
#include <deque>
#include <time.h>
#include <list>
#include <iomanip>
#include <queue>
#include <cctype>
using namespace std;
typedef long long ll;
ll mod = 1000000007;
#define inf 2000000001
#define infD 200000000001
#define infL -2000000000000000001

int f(int k, vector<int>& arr){
  int curmin = arr[0];
	int k1 = k;
  for (int i = 1; i < arr.size(); i++){
		if (arr[i] < curmin){
			curmin = arr[i];
			k1 = k;
		} else {
			k1--;
			if (k1 == 0){
				return curmin;
			}
		}
  }
	return curmin;
}

int main(){
 int n;
 cin >> n;
 vector<int> arr(n);
 int global_min = 100000;
 for (int i = 0; i < n; i++){
   int a;
   cin >> a;
   arr[i] = a;
   if(a < global_min){
     global_min = a;
   }
 }
  for(int i = 1; i < n; i++){
    if(f(i, arr) == global_min){
      cout << i;
      break;
    }
  }


}