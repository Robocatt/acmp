#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<vector<long long>> arr(n, vector<long long> (n));
    vector<vector<long long>> dist(n, vector<long long> (n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            int in;
            cin >> in;
            if(i == j){
                arr[i][j] = 0;
            }else{
                arr[i][j] = (in == 0 ? INT32_MAX : in);
            }
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
    int a,b;
    cin >> a >> b;
    cout << (dist[a - 1][b - 1] == INT32_MAX ? -1 : dist[a - 1][b - 1]) ;
    
    return 0;
}
