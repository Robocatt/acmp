#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n, m, count = 0;
    cin >> n >> m;
    vector<vector<char>> arr(n, vector<char> (m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    if (n == 1 && m == 1 && arr[0][0] == '.'){
        cout << 1;
        return 0;
    }
    for(int i = 1; i < n - 1; i++){
        for(int j = 1; j < m - 1; j++){
            if(arr[i][j] != '*' && arr[i + 1][j] != '*' && arr[i][j + 1] != '*' && arr[i - 1][j] != '*' && arr[i][j - 1] != '*'){
                count ++;
            }
        }
    }
    //верх
    for(int i = 1; i < m - 1; i++){
        if(arr[0][i] != '*' && arr[0][i - 1] != '*' && arr[0][i + 1] != '*' && arr[1][i] != '*'){
            count ++;
        }
    }
    //низ
    for(int i = 1; i < m - 1; i++){
        if(arr[n-1][i] != '*' && arr[n - 1][i - 1] != '*' && arr[n - 1][i + 1] != '*' && arr[n - 2][i] != '*'){
            count ++;
        }
    }
    //лево
    for(int i = 1; i < n - 1; i++){
        if(arr[i][0] != '*' && arr[i + 1][0] != '*' && arr[i - 1][0] != '*' && arr[i][1] != '*'){
            count ++;
        }
    }
    //право
    for(int i = 1; i < n - 1; i++){
        if(arr[i][m - 1] != '*' && arr[i + 1][m - 1] != '*' && arr[i - 1][m - 1] != '*' && arr[i][m - 2] != '*'){
            count ++;
        }
    }
    if (n > 1 && m > 1){
        if(arr[0][0] != '*' && arr[0][1]!= '*' && arr[1][0]!= '*'){
            count ++;
        }
        if(arr[0][m - 1] != '*' && arr[0][m - 2]!= '*' && arr[1][m - 1]!= '*'){
            count ++;
        }
        if(arr[n - 1][0] != '*' && arr[n - 2][0]!= '*' && arr[n - 1][1]!= '*'){
            count ++;
        }
        if(arr[n - 1][m - 1] != '*' && arr[n - 1][m - 2]!= '*' && arr[n - 2][m - 1]!= '*'){
            count ++;
        }
    }
    cout << count;

    return 0;
}