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

string s1 = "cab";
string s2 = "ba";

void f(string & str, int t){
	str.push_back(s1[t % 3]);
	if (t % 2 == 0){
		str.push_back('a');
	}
	if (t % 3 == 0){
		str.push_back(s2[t / 3 % 2]);
	}
}

int getBytes(string& str){
	set<string> s;
	for (int i = 0; i + 2 < str.size(); i++){
		s.insert(str.substr(i, 3));
	}
	return ceil(log2(s.size()));
}

int main() {
	int dif = 1000000;
	string str = "";
  for (int t = 1; dif != 40; t++){
		f(str, t);
		if (str.size() % 3 != 0){
			dif = 10000;
		} else {
			dif = 2 * str.size() - getBytes(str) * str.size() / 3;
		}
	}
	cout << str << endl << str.size();
  return 0;
}