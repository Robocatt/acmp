#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<vector<long long>> arr(n, vector<long long> (n));
    vector<vector<long long>> dist(n, vector<long long> (n));
    vector<vector<long long>> dist2(n, vector<long long> (n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            int in;
            cin >> in;
            arr[i][j] = (in == 100000 ? INT32_MAX : in);
        }
    }

    dist = arr;
    dist2 = arr;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            for(int k = 0; k < n; k++){
                dist[j][k] = min(dist[j][k],dist[j][i] + dist[i][k]);
            }
        }
    }

    for(int i = 0; i < n; i++){
        if(dist[i][i] < 0){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    
    return 0;
}
