#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include<iomanip>
typedef long long ll;
using namespace std;

int ans = 0;

void f(vector<int> &vec, int n, int left, vector<bool> &used){
	if (left < 0){
    return;
  }
  if(left > n - vec.size()){
    return;
  }
  if (vec.size() == n){
		

    ans++;
    return;
  }
  
  for(int i = 1; i <= n; i++){
    if(!used[i]){
      used[i] = true;
      vec.push_back(i);
      if(vec.size() == i){
        f(vec, n, left - 1, used);
      }else{
        f(vec, n, left, used);
      }
      used[i] = false;
      vec.pop_back();
    }
  }
  return;
}


int main(){
	int n = 9;
	vector<int> vec;
	vector<bool> used(n + 1, false);
  f(vec, n, 6, used);
  cout << ans;
}