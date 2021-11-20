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

int main(){
    int n;
    cin >> n;
    vector<vector<int>> arr(n,vector<int> (n));
    for(int i = 0; i <n; i++){
        for(int j = 0; j <n; j++){
            cin >> arr[i][j];
        }
    }
    for(int i = 1; i <n; i++){
        for(int j = 0; j <i; j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
    for(int i = 0; i <n; i++){
        for(int j = 0; j <n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    

    return 0;
}