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
    vector<vector<vector<int>>> arr (26, vector<vector<int>>(26,vector<int> (26)));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            arr[0][i][j] = 'A' + i;
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            for(int k = 1; k < n; k++){
                arr[k][j][i] = 'A' + i;
            }
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            for(int k = 0; k < n; k++){
                cout << char(arr[i][j][k]);
            }
            cout << " ";  
        }
        cout << endl;
    }

    return 0;
}