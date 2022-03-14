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

void printarr(vector<vector<int>> & arr){
    for(int i = 0; i < arr.size(); i++){
        for(int j = 0; j < arr[i].size(); j++ ){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main(){
    
    vector<vector<int>> arr(101,vector<int>(101));
    vector<vector<int>> sample(101,vector<int>(101));
    
    for(int i = 0; i < 101;i++){
        sample[0][i]=i;
    }

    for(int i = 0; i < 101; i++){
        sample[i][0] = i;
    }
    //printarr(sample);
    for(int i = 2; i < 101; i++){
        arr = sample;
        int count = 0;
        for(int j = 1; j < i; j++){
            for(int k = 1; k < i; k++){
                arr[j][k] = (arr[j][0] % arr[0][k]) + (arr[0][k] % arr[j][0]);
                if(arr[j][k] == 27){
                    count ++;
                }
            }        
        }
        //printarr(arr);
        if(count == 86){
            cout << i;
            break;
        }
    }
    cout << 2 % 3;
    return 0;
}