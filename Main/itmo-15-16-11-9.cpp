#include<iostream>
#include<iomanip>
#include<vector>
#include<set>
#include<queue>
#include<deque>
#include<map>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){
    vector<vector<int>> arr1(10,vector<int> (10)), arr2(10,vector<int> (10,0));
    int c = 0;
    for(int i = 0; i < 10; i+=2){
        for(int j = 0; j < 10; j++){
            arr1[j][i] = ++c;
        }
        for(int j = 9; j >= 0; j--){
            arr1[j][i + 1] = ++c;
        }
    }
    c = 0;
    int cur_dir = 0;
    int i = -1, j = 0;
    while (c < 100){
        if(cur_dir == 0){
            if(i < 9 && arr2[i + 1][j] == 0){
                arr2[i + 1][j] = ++c;
                i++;
            }else{
                cur_dir ++;
            }
        }else if (j <= 9 && cur_dir == 1 ){
            if(arr2[i][j + 1] == 0){
                arr2[i][j + 1] = ++c;
                j++;
            }
            else{
                cur_dir ++;
            }
        }else if (i >= 0 && cur_dir == 2 ){
            if(i == 0){
                cur_dir ++;
            }
            else if(arr2[i - 1][j] == 0){
                arr2[i - 1][j] = ++c;
                i--;
            }else{
                cur_dir ++;
            }
        }else if (cur_dir == 3  ){
            if(arr2[i][j - 1] == 0){
                arr2[i][j - 1] = ++c;
                j--;
            }else{
                cur_dir = 0;
            }
        }
    }
    int a = 0, b = 0;
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if(arr1[i][j] > arr2[i][j]){
                b++;
            }else if(arr2[i][j] > arr1[i][j]){
                a++;
            }
        }
    }
    cout << a << " " << b;

    return 0;
}