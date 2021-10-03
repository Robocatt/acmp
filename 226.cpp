#include <iostream>
#include <vector>
#include <string>
using namespace std;



int main(){
    int n, e;
    cin >> n >>e;
    vector<vector<double>> arr(n + 1, vector<double> (n + 1));
    for(int i = 0; i < e; i++){
        int x, y;
        double z;
        cin >> x >> y >> z;
        arr[x][y] = z;
        arr[y][x] = z;
    }
    for(int i = 1; i < n + 1; i++){
        for(int j = 1; j < n + 1; j++){
            if(arr[i][j] == 0 && i != j){
                arr[i][j] = INT32_MAX - 1;
            }
        }
    }
    for(int i = 0; i < n + 1; i++){
        for(int j = 0; j < n + 1; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }


    vector<vector<double>> d = arr;
    for(int i = 1; i < n + 1; i++){
        for(int j = 1; j < n + 1; j++){
            for(int k = 1; k < n + 1; k++){
                d[j][k] = min(d[j][k], d[j][i] + d[i][k]) ;
            }
        }
    }

    for(int i = 0; i < n + 1; i++){
        for(int j = 0; j < n + 1; j++){
            cout << d[i][j] << " ";
        }
        cout << endl;
    }


    cout << 0;



    return 0;
}