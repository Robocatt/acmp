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

void move(pair<int,int>&st, int k, int &n, vector<vector<int>> &arr){
    int start_i = st.first;
    int start_j = st.second;
    for(int i = 0; i < n; i++){
        arr[start_i + i][start_j] = 1; 
    }
    for(int i = 0; i < n; i++){
        arr[start_i + n - 1][start_j + i] = 1; 
    }
    n+=k;
    for(int i = 0; i < n; i++){
        arr[start_i + n - 1 - i][start_j + n - 1] = 1; 
    }
    for(int i = 0; i < n; i++){
        arr[start_i - n + 1 ][start_j + n - 1 - i] = 1; 
    }
    st = {start_i - n + 1, start_j - n + 1};
}

int main(){
    vector<vector<int>> arr(101,vector<int> (101,0));
    int n = 5, k = 5, st_i = 50, st_j = 50;
    pair<int,int> st = {st_i,st_j};
    for(int i = 0; i < 3; i++){
        move(st.first, st.second, k, n, arr);
        for(int i = 0; i < arr.size(); i++){
            for(int j = 0; j < arr.size(); j++){
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}