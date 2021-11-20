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
    int n,m;
    cin >> n >> m;
    vector<vector<int>> arr(n,vector<int> (m));
    for(int i = 0; i <n; i++){
        for(int j = 0; j <m; j++){
            cin >> arr[i][j];
        }
    }
    cout << endl;
    for(int i = n - 1; i >= 0; i--){
        for(int j = 0; j < m; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    

    return 0;
}