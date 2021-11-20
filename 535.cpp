#include<iostream>
#include<iomanip>
#include<vector>
#include<set>
#include<queue>
#include<deque>
#include<map>
#include<algorithm>
#include<cmath>
#include<string>
using namespace std;

long long arr_to_ll(vector<long long> a){
  reverse(a.begin(),a.end());
  long long res = 0;
  int f = a.size()-1;
  for(int i = 0; i < a.size(); i++){
    res += a[i] * pow(10,f);
    f--;
  }
  return res;
}



bool comp(vector<long long> const & a, vector<long long> const & b){
  if(a.size() < b.size()){
		return true;
	}
	if(a.size() > b.size()){
		return false;
	}
	int pos = 0;
	for (; pos < a.size() && a[pos] == b[pos]; pos++){}

	return (pos != a.size() && a[pos] < b[pos]);
}

void print(vector<long long> const & x){
  for(int i = x.size() - 1; i >= 0; i--){
    cout << x[i];
  }
}


vector<long long> summ(vector<long long> a, vector<long long> b){
  vector<long long> sum;
  a.resize(max(a.size(),b.size()), 0);
  b.resize(max(a.size(),b.size()), 0);
  for(int i = 0; i < a.size(); i++){
    long long x = a[i] + b[i];
		if (x == 0){
			sum.push_back(0);
		}
    while(x > 0){
      sum.push_back(x % 10);
      x /= 10;
    }
    
  }
  return sum;
}

int main(){
    long long a, b, c;
    cin >> a >> b >> c;
    vector<long long> a1, a2, a3;
    while( a > 0){
      a1.push_back(a % 10);
      a /= 10;
    }
    while( b > 0){
      a2.push_back(b % 10);
      b /= 10;
    }
    while( c > 0){
      a3.push_back(c % 10);
      c /= 10;
    }
    set<vector<long long>> ans;
    ans.insert(summ(summ(a1,a2), a3));
    ans.insert(summ(summ(a1,a3), a2));
		ans.insert(summ(summ(a2,a1), a3));
    ans.insert(summ(summ(a2,a3), a1));
		ans.insert(summ(summ(a3,a1), a2));
    ans.insert(summ(summ(a3,a2), a1));
    
    vector<long long> ans_mod;
    vector<vector<long long>> answers;
		for(set<vector<long long>>::iterator it = ans.begin(); it != ans.end(); it++){
      answers.push_back(*it);
      ans_mod.push_back(arr_to_ll(*it));
    }
    if(ans_mod.size() == 1){//ans.size
      cout << "NO" << endl;
    }else{
      cout << "YES" << endl;
    }
    
    
    sort(ans_mod.begin(),ans_mod.end());
    for(int i = 0; i < ans_mod.size(); i++){
      cout << ans_mod[i] << endl;
    }
		//sort(answers.begin(),answers.end(),comp);
    //for(int i = 0; i < answers.size();i++){
    //  print(answers[i]);
    //  cout << endl;
    //}


    

    return 0;
}