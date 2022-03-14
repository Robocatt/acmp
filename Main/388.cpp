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

vector<vector<int>> a(751,vector<int>(751));
vector<int> m1(751);
vector<int> m2(751);
int i, j, m, n; 
    int minn(int i) { 
        int res = 1000000; 
        for (int j = 1;j<=m;j++) 
            if (res > a[i][j]) 
                res = a[i][j]; 
        return res; 
    } 
int maxx(int i) { 
    int res = -1000000; 
    for (int j = 1; j <= n; j++) {
        if (res < a[j][i]) {
            res = a[j][i]; 
        }
    }
    return res; 
} 
int main() {
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    cin >> n >> m; 
    int ans = 0; 
    for (i = 1;i <= n; i++) {
        for (j = 1; j <= m; j++) {
            cin >> a[i][j]; 
        }
    }

    for (i = 1; i <= n; i++) {
        m1[i] = minn(i); 
    }
    for (j = 1; j <= m; j++){
        m2[j] = maxx(j); 
    }
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= m; j++) {
            if (a[i][j] == m1[i] && a[i][j] == m2[j]) {
                ans++; 
            }
        }
    }
    cout << ans; 
    return 0; 
} 