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

int f(vector<char> &vec){
	int task = 0;
	int time = 0;
	int x = 0;
	int y = 0;
	for ( ; task != 10 || x != 0 || y != 0; time++){
		if (x == 0){
			if (task != 10){
				x = (vec[task] == 'A' ? 3 : 7);
				task++;
			}
		}

		if (y == 0){
			if (task != 10){
				y = (vec[task] == 'A' ? 11 : 8);
        task++;
			}
		}

		if (x > 0){
			x--;
		}
		if (y > 0){
			y--;
		}
	}

	return time;
}

int main(){
    vector<char> arr = {'A','A','A','A','A','A','B','B','B','B'};
    
    int time_min = INT16_MAX;
    do{
			int t = f(arr);
			cout << t << endl;
      time_min = min(time_min, t);
    }while((next_permutation(arr.begin(),arr.end())));
    cout << time_min;

    return 0;
}