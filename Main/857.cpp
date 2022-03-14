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
#include <sstream>
#include <deque>
#include <time.h>
#include <list>
#include <iomanip>
#include <queue>
#include <cctype>
#include <stdlib.h>
using namespace std;
typedef long long ll;
#define inf 2000000001
#define infD 200000000001
#define infL 2000000000000001
#define module 1000000007
 
 
vector<int> zFunction(string& str){
	int n = str.size();
	vector<int> z(n, 0);
  z[0] = str.size();

	int l = 0;
	int r = 0;

	for (int i = 1; i < n; i++){
		if (i < r){
			z[i] = min(z[i - l], r - i + 1);
		}

		while (i + z[i] < n && str[i + z[i]] == str[z[i]]){
			z[i]++;
		}

		if (i + z[i] - 1 > r){
			l = i;
			r = i + z[i] - 1;
		}
	}

	return z;
}
 
  
int main()
{
	int n;
  cin >> n;
	map<string, int> myMap;
  for(int i = 0; i < n; i++){
    string s;
    cin >> s;
    vector<int> arr = zFunction(s);
    for(int i = 0; i < arr.size(); i++){
      if(i + arr[i] == s.size()){
        myMap[s.substr(i)]++;
      }
    }
  }
  int m;
  cin >> m;
  for(int i = 0; i < m; i++){
    string s;
    cin >> s;
    cout << myMap[s] << endl;
  }

}