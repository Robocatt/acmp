#include <iostream>
#include <vector>
using namespace std;

int main() {

    int a;
    cin >> a;
    for(int i = 0; i < a; i++){
        int n, m;
        cin >> n >> m;
        vector<vector<int>> arr(n,vector<int> (m));
        for(int j = 0; j < n; j++){
            for (int k = 0; k < m; k++){
                cin >> arr[j][k];
            }
        }
        bool f = true;
        for(int j = 0; j < n - 1; j++){
            for(int k = 0; k < m - 1; k++){
                if( (arr[j][k] + arr[j][k + 1] + arr[j + 1][k] + arr[j + 1][k + 1]) % 4 == 0 ){
                    f = false;
                }
            }
        }
        cout << (f ? "YES" : "NO") << endl;
    }
    


    return 0;
}