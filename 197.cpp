#include <iostream>
#include<vector>
#include<iomanip>
using namespace std;





int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<int>> arr(n, vector<int> (m));
    for(int i = 0; i < n ; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    int count = 0;
    for(int i = 0; i < n ; i++){
        for(int j = 0; j < m ; j++){
            if(arr[i][j] != arr[i][j + 1] || arr[i][j] != arr[i + 1][j] || arr[i][j] != arr[i + 1][j + 1]){
                count ++;
            }
            
        }
    }
    int count_w = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j  < m - 1; j++){
            if((arr[i][j] != arr[i][j + 1])){
                count_w ++;
            }
        }
    }
    for(int i = 0; i < n - 1 ; i++){
        for(int j = 0; j < m; j++){
            if((arr[i][j] != arr[i + 1][j]) ){
                count_w ++;
            }
        }
    }
    count /= 2;

    cout << fixed << setprecision(2);
    cout << (double)count  * 0.2 * 0.2 * 3 + (double)count_w * 0.2 * 0.8 * 3;


    return 0;
}