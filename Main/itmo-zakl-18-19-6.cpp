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
    vector<vector<int>> sample = {{0,0,0,0,0,0,0}, {1,0,0,0,0,0,1}, {0,1,0,0,0,1,0}, {0,0,1,0,1,0,0}, {0,0,0,1,0,0,0}};
    for(int i = 156; i < 157; i++){
       
        vector<vector<int>> arr(5, vector<int>(7));
        ll h = i;
        ll n = 5, k = 0;
        h = h * h;
        while(h > 0 && k < 7){
            arr[h % n][k] = 1;
            h = h / n;
            k++;
        }
        if(arr == sample){
            cout << "!!!!" << i << endl;
        }
        for(int i = 0; i < 5; i++){
            for(int j = 0; j < 7; j++){
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}