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

set<int> ans;
 
void f(int num, int sum){
	if (sum > 10){
		return;
	} else {
		ans.insert(num);
	}

	for (int i = 1; i <= 16; i++){
		f(num * 10 + i, sum + i);
	}
	return;
}

int main(){
	for (int i = 1; i <= 16; i++){
		f(i * 11, 2 * i);
	}

	cout << ans.size();
}