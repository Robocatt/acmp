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

void fillA(vector<vector<int>>& vec){
	int x = 200;
	int y = 200;
	int n = 5;
	int k = 5;
	vec[x][y] = 1;
	for (int steps = 0; steps < 5; steps++){
		for (int i = 0; i < n; i++){
			y++;
			vec[x][y] = 1;
		}
		for (int i = 0; i < n; i++){
			x++;
			vec[x][y] = 1;
		}
		n += k;
		for (int i = 0; i < n; i++){
			y--;
			vec[x][y] = 1;
		}
		for (int i = 0; i < n; i++){
			x--;
			vec[x][y] = 1;
		}
		n += k;
	}
}

int getCount(int k){
	vector<vector<int>> vec(401, vector<int> (401, 0));
	int x = 207;
	int y = 193;
	int c = 0;
	int n = k;
	fillA(vec);

	for (int steps = 0; steps < 5; steps++){
		for (int i = 0; i < n; i++){
			y++;
			c += vec[x][y];
		}
		for (int i = 0; i < n; i++){
			x++;
			c += vec[x][y];
		}
		n += k;
		for (int i = 0; i < n; i++){
			y--;
			c += vec[x][y];
		}
		for (int i = 0; i < n; i++){
			x--;
			c += vec[x][y];
		}
		n += k;
	}

	return c;
}

int main(){
    for (int i = 1; i <= 20; i++){
			cout << i << "->" << getCount(i) << endl;
		}

    return 0;
}