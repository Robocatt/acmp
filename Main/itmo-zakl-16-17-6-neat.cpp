#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <iomanip>
#include <set>
#include <string>
#include <map>
#include <queue>
#include <utility>
using namespace std;

typedef long long ll;



int main() {
	int b = 0;
	int a = 8;
 	vector<vector<int>> vec(501, vector<int> (501, 0));
	int x = 250;
	int y = 250;
	vector<int> stepX = {1, 0, -1, 0};
	vector<int> stepY = {0, 1, 0, -1};
	int dir = 0;
	for (int i = 0; i < 1000; i++){
		x += stepX[dir];
		y += stepY[dir];
		vec[x][y]++;
		b++;
		if (a == b){
			dir = (dir + 1) % 4;
			b = 0;
			a -= 2;
		}
		if (a == 0){
			a = 8;
		}
	}


	/*for (int i = 230; i < 270; i++){
		for (int j = 230; j <= 270; j++){
			cout << vec[i][j];
		}
		cout << endl;
	}*/
	int ans = 0;
	for (int i = 0; i < 501; i++){
		for (int j = 0; j <= 501; j++){
			ans += (vec[i][j] > 1 ? 1 : 0);
		}
	}
  
  cout << ans;
  
}