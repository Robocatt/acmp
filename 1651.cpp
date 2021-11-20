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
    int n,k;
    cin >> n >> k;
    if(n == k){
        cout << 1;
        return 0;
    }
    vector<vector<int>> up(n + 1,vector<int> (n + 1,0)),down(n + 1,vector<int> (n + 1,0));
    up[k][k] = 1;
    down[k][k] = 1;
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            for(int x = 1; x <= j - 1; x++){
                up[i][j] += down[i - j][x];
            }
            for(int x = j + 1; x <= n; x++){
                down[i][j] += up[i - j][x];
            }
        }
    }
    unsigned long long ans = 0;
    for(int i = 1; i <= n; i++){
        ans += up[n][i];
        ans += down[n][i];
    }
    cout << ans % (1000000007);
    return 0;
}