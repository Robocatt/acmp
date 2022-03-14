#define _USE_MATH_DEFINES
#include<iostream>
#include<fstream>
#include<vector>
#include<queue>
#include<deque>
#include<set>
#include<map>
#include<string>
#include<utility>
#include<cmath>
#include<algorithm>
typedef unsigned long long ul;
typedef long long ll;
using namespace std;



int main(){
	int a, b, n, m;
	cin >> a >> b >> n >> m;
	
  vector<vector<bool>> check(a * b, vector<bool> (a * b, true));
	for (int i = 0; i < a * b; i++){
		for (int j = 0; j < a * b; j++){
			int k1 = i;
			int k2 = j;
			for (int l = 0; l < a * b; l++){
				if (k1 % 2 != 1 && k2 % 2 == 1){
					check[i][j] = false;
				}
				k1 /= 2;
				k2 /= 2;
			}
		}
	}


	//vec - вектор двоичных чисел - шаблонов; vec[i] = i-й шаблон 
	vector<int> vec(pow(2,a * b), 0);
	for (int l = 0; l < n; l++){
		int k = 0;
		char c;
		for (int i = 0; i < a; i++){
			for (int j = 0; j < b; j++){
				cin >> c;
				k = k * 2 + (c == '0' ? 0 : 1);
			}
		}
		vec[k]++;
	}
	for(int l = 0; l < m; l++){
		char c;
		int k = 0;
		for(int i = 0; i < a; i++){
			for(int j = 0; j < b; j++){
				cin >> c;
				k = k * 2 + (c == '1' ? 1 : 0);
			}
		}
		cout << "test";
		
	}

  return 0;
}