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

void move_a(pair<int,int>&st, int k, int &n, vector<vector<int>> &arr){
    int start_i = st.first;
    int start_j = st.second;
    arr[start_i][start_j] = 1;
    for(int i = 1; i <= n; i++){
        arr[start_i - i][start_j] = 1; 
    }
    for(int i = 1; i <= n; i++){
        arr[start_i - n][start_j + i] = 1; 
    }
    int ii = start_i - n;
    int jj = start_j + n;
    n+=k;
    for(int i = 1; i <= n; i++){
        arr[ii + i][jj] = 1; 
    }
    ii +=n;
    for(int i = 1; i <= n; i++){
        arr[ii][jj - i] = 1; 
    }
    st = {ii, jj - n};
    n+=k;
}

int move_b(pair<int,int>&st, int k, int &nn, vector<vector<int>> &arr){
    int count = 0;
    int start_i = st.first;
    int start_j = st.second;
    count += (arr[start_i][start_j] == 1 ? 1 : 0);
    for(int i = 1; i <= nn; i++){
        count += (arr[start_i - i][start_j] == 1 ? 1 : 0);
        arr[start_i - i][start_j] = 0; 
    }
    for(int i = 1; i <= nn; i++){
        count += (arr[start_i - nn][start_j + i] == 1 ? 1 : 0);
        arr[start_i - nn][start_j + i] = 0; 
    }
    int ii = start_i - nn;
    int jj = start_j + nn;
    nn+=k;
    for(int i = 1; i <= nn; i++){
        count += (arr[ii + i][jj] == 1 ? 1 : 0);
        arr[ii + i][jj] = 0; 
    }
    ii += nn;
    for(int i = 1; i <= nn; i++){
        count += (arr[ii][jj - i] == 1 ? 1 : 0);
        arr[ii][jj - i] = 0; 
    }
    st = {ii, jj - nn};
    nn+=k;
    return count;
}

int main(){
    vector<vector<int>> arr(1001,vector<int> (1001,0));
    int n = 5, k = 5, st_i = 500, st_j = 500;
    pair<int,int> st = {st_i,st_j};
    for(int i = 0; i < 5; i++){
        move_a(st, k, n, arr);
    }
    st_i -= 7;
    st_j += 7;
    int maxx = -1;
    int nnnnnn = -1;
    st = {st_i,st_j};
    for(int kk = 2; kk < 10; kk++){
        int nn = kk;
        int cur_c = 0;
        for(int i = 0; i < 5; i++){
            if(i == 4){
                int cur = move_b(st, kk, nn, arr);
                cur += cur_c;
                if (cur > maxx){
                    maxx = cur;
                    nnnnnn = kk;
                }
            }else{
                cur_c += move_b(st, kk, nn, arr);
            }
        }
    }
    

    cout << maxx << " " << nnnnnn;

    return 0;
}