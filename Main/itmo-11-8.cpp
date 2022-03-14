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

bool flag = false;

void printarr(vector<vector<bool>> & arr){
    for(int i = 0; i < arr.size(); i++){
        for(int j = 0; j < arr[i].size(); j++ ){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void go(int& cur_i, int& cur_j, vector<vector<bool>> &field){
    if(cur_i <= 6  && !field[cur_i + 1][cur_j]){
        field[cur_i + 1][cur_j] = true;
        cur_i ++;
    }else if(cur_j <= 6 && !field[cur_i][cur_j + 1]){
        field[cur_i][cur_j + 1] = true;
        cur_j ++;
    }else if(cur_i >= 1 && !field[cur_i -1][cur_j]){
        field[cur_i -1][cur_j] = true;
        cur_i --;
    }else if(cur_j >= 1 && !field[cur_i][cur_j - 1]){
        field[cur_i][cur_j - 1] = true;
        cur_j --;
    }else{
        flag = true;
    }
    return;
}


int main(){
    vector<vector<bool>> all(8,vector<bool>(8,true));
    vector<vector<bool>> sample(8,vector<bool> (8,false));
    vector<vector<bool>> field(8,vector<bool> (8,false)); // там не был 
    sample[3][1] = true;
    sample[3][2] = true;
    sample[3][3] = true;
    sample[3][4] = true;
    sample[3][5] = true;
    sample[3][6] = true;
    sample[4][6] = true;
    sample[5][6] = true;
    sample[6][6] = true;
    int count = 0;
    //printarr(sample);
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            field = sample;
            
            int cur_i = i;
            int cur_j = j;
            field[cur_i][cur_j] = true;
            while(!flag){
                go(cur_i, cur_j,field);
                //printarr(field);
            }
            flag = false;
            if(field == all){
                count ++;
            }
        }
    }

    cout << count;


    return 0;
}