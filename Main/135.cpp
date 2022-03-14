#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<vector<int>> arr(n, vector<int> (n));
    vector<vector<int>> dist(n, vector<int> (n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    dist = arr;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            for(int k = 0; k < n; k++){
                dist[j][k] = min(dist[j][k],dist[j][i] + dist[i][k]);
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << dist[i][j] << " ";
        }
        cout << endl;
    }

    
    return 0;
}
