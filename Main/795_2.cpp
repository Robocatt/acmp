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
#include <sstream>
#include <deque>
#include <time.h>
#include <queue>
#include <iomanip>
 
using namespace std;
 
typedef long long ll;
typedef long double ld;

int fLeft(ll p, int curr, ll size_arr, ll k){
  p -= max(0ll, (p / (size_arr * k) - 1)) * size_arr * k;
  while(p > k){
    p -= k;
    curr =  (curr - 1 + size_arr) % size_arr;
  }
  return curr;
}

int fRight(ll p, int curr, ll size_arr, ll k){
  p -= max(0ll, (p / (size_arr * k) - 1)) * size_arr * k;
  while(p > k){
    p -= k;
    curr =  (curr + 1) % size_arr;
  }
  return curr;
}

int main(){
  int n,a,b,k,maxx= -1;
  cin >> n;
  vector<int> arr(n);
  for(int i = 0; i < n; i++){
    int inn;
    cin >> inn;
    arr[i] = inn;
    maxx = max(maxx,inn);
  }
  cin >> a >> b >> k;
  if((b - a) >= 1ll * n * k){
    cout << maxx;
		return 0;
  }
  int ans = -1;
	for(int i = a; i <= b; i += k){
    ans = max(ans, arr[fLeft(i, 0, n, k)]);
    ans = max(ans, arr[fRight(i, 0, n, k)]);
    //cout << i << " " << fLeft(i, 0, n, k) << " " << fRight(i, 0, n, k) << endl;
  }

  cout << ans;

  return 0;
}