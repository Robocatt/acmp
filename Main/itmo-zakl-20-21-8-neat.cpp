#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <set>
#include <algorithm>
#include <iomanip>
#include <map>
#include <fstream>

using namespace std;
typedef long long ll;

bool checkColumn(vector<vector<char>>& vec, int j, char c){
	for (int i = 0; i < 10; i++){
		if (vec[i][j] != c){
			return false;
		}
	}
	return true;
}

string check(vector<vector<char>> & vec){
	int count = 0;
	for (int i = 1; i < 21; i++){
		if (!checkColumn(vec, i, vec[0][i])){
			return "Incorrect";
		}
		if (vec[0][i] == '#' && vec[0][i - 1] != '#'){
			count++;
		}
	}
	if (count == 1){
		return "Negative";
	}
	if (count == 3){
		return "Positive";
	}
	return "Incorrect";
}

int main() {
  int t;
	cin >> t;
	while (t > 0)
		vector<vector<char>> vec(10, vector<char> (22, '.'));
		for (int i = 0; i < 10; i++){
			for (int j = 0; j < 20; j++){
				cin >> vec[i][j];
			}
		}
		cout << check(vec);
		t--;
	}
  return 0;
}