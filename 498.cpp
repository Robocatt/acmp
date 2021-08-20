#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include<iomanip>
typedef long long ll;
using namespace std;

int f(vector<int> &vec, int n, int k, vector<bool> &used){
	if (vec.size() == n){
		for (int a : vec){
			cout << a << " ";
		}
		cout << endl;
		return 1;
	}

	int ans = 0;
	if (vec.size() == 0){
		for (int i = 1; i <= n; i++){
			if (!used[i]){
				used[i] = true;
				vec.push_back(i);
				ans += f(vec, n, k, used);
				vec.pop_back();
				used[i] = false;
			}
		}
	} else {
		for (int i = max(1, vec[vec.size() - 1] - k); i <= min(n, vec[vec.size() - 1] + k); i++){
			if (!used[i]){
				used[i] = true;
				vec.push_back(i);
				ans += f(vec, n, k, used);
				vec.pop_back();
				used[i] = false;
			}
		}
	}

	return ans;
}

int main(){
	int n = 4;
	vector<int> vec;
	vector<bool> used(n, false);
  f(vec, n, 2, used);
}