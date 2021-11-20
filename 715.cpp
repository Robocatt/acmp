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
    int n, m;
    cin >> n >> m;
    vector<vector<char>> a1(n,vector<char> (m)), a2(n,vector<char> (m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a1[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a2[i][j];
        }
    }
    int res = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            res += (a1[i][j] == a2[i][j] ? 1 : 0);
        }
    }
    cout << res;

    return 0;
}