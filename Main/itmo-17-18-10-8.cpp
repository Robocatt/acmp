#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>> arr(10,vector<int> (10,3));
    vector<vector<int>> arr_formed(10,vector<int> (10,3));
    for(int i = 1; i < 9 ; i++){
        for(int j = 1; j < 9; j++){
            arr[i][j] = 0;
        }
    }
    arr_formed = arr;
    arr_formed[1][3] = 1;
    arr_formed[2][4] = 1;
    arr_formed[3][2] = 1;
    arr_formed[3][3] = 1;
    arr_formed[3][4] = 1;
    for(int k = 0; k < 4; k++){
        arr = arr_formed;
        for(int i = 1; i < 9; i++){
            for(int j = 1; j < 9; j++){
                int count = 0;
                if(arr[i+1][j] == 1){
                    count ++;
                }
                if(arr[i][j+1] == 1){
                    count ++;
                }
                if(arr[i-1][j] == 1){
                    count ++;
                }
                if(arr[i][j-1] == 1){
                    count ++;
                }
                if(arr[i-1][j-1] == 1){
                    count ++;
                }
                if(arr[i+1][j+1] == 1){
                    count ++;
                }
                if(arr[i+1][j-1] == 1){
                    count ++;
                }
                if(arr[i-1][j+1] == 1){
                    count ++;
                }
                if(arr[i][j] == 0){
                   if(count == 3){
                        arr_formed[i][j] = 1;
                    } 
                }else if(arr[i][j] == 1){
                    if(count < 2){
                        arr_formed[i][j] = 0;
                    }else if (count > 3){
                        arr_formed[i][j] = 0;
                    }
                }
            }
        }
    }
    for(int i = 1; i < 9 ; i++){
        for(int j = 1; j < 9; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}