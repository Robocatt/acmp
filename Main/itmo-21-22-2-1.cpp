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
    ofstream fout("out.txt");
    vector<vector<int>> arr(101, vector<int> (101));
    arr[0][0] = 1;
    for(int i = 1; i < 100; i++){
        arr[0][i] = arr[0][i - 1] + 1;
    }
    for(int i = 1; i < 100; i++){
        arr[i][0] = arr[i - 1][0] + 1;
    }
    for(int i = 1; i < 100; i++){
        for(int j = 1; j < 100; j++){
            arr[i][j] = arr[i - 1][j - 1] + abs(arr[0][j] - arr[i][0]);
        }
    }

    for(int i = 0; i < 100; i++){
        for(int j = 0; j < 100; j++){
            fout << arr[i][j] << " ";
        }
        fout << endl;
    }
    set<pair<int,int>> se;
    int count = 0;
    for(int i = 0; i < 100; i++){
        for(int j = 0; j < 100; j++){
            int count_cur = 0;
            for(int k = 0; k <= i; k++){
                for(int l = 0; l <= j; l++){
                    if(arr[k][l] == 70){
                        count_cur++;
                    }
                }
            }
            if(count_cur == 6){
                count++;
                cout << i << " " << j << endl;
            }
        }
    }
    cout << count;


    return 0;
}