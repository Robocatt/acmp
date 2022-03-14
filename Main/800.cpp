#define _USE_MATH_DEFINES
#include <fstream>
#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
#include <queue>
#include <cmath>
#include <queue>
#include <sstream>
#include <stdio.h>
typedef long long ll;
typedef long double ld;
using namespace std;

int gcd(int a, int b){
  if(b == 0){
    return a;
  }else{
    return gcd(b, a % b);
  }
}

int rec(vector<int> &div, int n, int k, long long mp, int index, vector<vector<bool>> & coprime){
  if (k == 0){
		return 1;
	}
    
	int ans = 0;
	for (int i = index + 1; i < div.size() && mp * div[i] <= n; i++){
    if (index == -1 || coprime[index][i] ){
      ans += rec(div, n, k - 1, mp * div[i], i, coprime); 
    }
  }
  
  return ans;
}


int main(){
  int n, k;
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  cin >> n >> k;
  vector<int> div;
  for (int i = 1; i * i <= n; i++){
    if (n % i == 0){
      div.push_back(i);
      if (n / i != i){
        div.push_back(n / i);
      }
    }
  }
  sort(div.begin(), div.end());
  vector<vector<bool>> coprime(div.size(), vector<bool> (div.size(),false));
  for(int i = 0; i < div.size(); i++){
    for(int j = i; j < div.size(); j++){
      if(gcd(div[i],div[j]) == 1){
        coprime[i][j] = true;
        coprime[j][i] = true;
      }
    }
  }

	
  cout << rec(div, n, k, 1, -1,coprime);


	return 0;
}