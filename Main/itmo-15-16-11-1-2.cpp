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

vector<int> bin(int a){
    vector<int> arr;
    while(a > 0){
        arr.push_back(a % 2);
        a/=2;
    }
    arr.push_back(0);
    reverse(arr.begin(),arr.end());

    return arr;
}

void printarr(vector<vector<bool>> & arr){
    for(int i = 0; i < arr.size(); i++){
        for(int j = 0; j < arr[i].size(); j++ ){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main(){
    vector<vector<bool>> arr(9,vector<bool> (9, true));
    vector<vector<bool>> sample(9,vector<bool> (9, true));
    sample[1][2] = false;
    sample[1][3] = false;
    sample[1][7] = false;
    sample[3][2] = false;
    sample[3][3] = false;
    sample[3][7] = false;
    sample[4][2] = false;
    sample[4][3] = false;
    sample[4][7] = false;
    sample[5][2] = false;
    sample[5][3] = false;
    sample[5][7] = false;
    sample[7][2] = false;
    sample[7][3] = false;
    sample[7][7] = false;
    
    for(int i = 1; i < 1000; i++){
        for(int j = 1; j < 1000; j++){
            vector<int> a = bin(i);
            vector<int> b = bin(j);
            a.push_back(0);
            reverse(a.begin(), a.end());
            a.erase(a.end() - 1);
            a.resize(9,0);
            b.resize(9,0);
            for(int k = 0; k < 9; k++){
                arr[0][k] = a[k];
                sample[0][k] = a[k];
            }
            for(int k = 0; k < 9; k++){
                arr[k][0] = b[k];
                sample[k][0] = b[k];
            }

            for(int i = 1; i <= 8; i++){
                for(int j = 1; j < 8; j++){
                    arr[i][j] = (arr[i - 1][1] && !arr[0][j + 1]) || 
                    (!arr[i][0] && arr[i][j - 1]);
                }
            }
            if(arr == sample){
                cout << i << " " << j << endl;
                return 0;
            }
        }
    }


    

    return 0;
}