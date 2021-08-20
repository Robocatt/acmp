#include <fstream>
#include <vector>
using namespace std;


int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");
    int m, n;
    fin >> m >> n;
    vector<vector<int> > arr(m,vector <int> (n,0));
    for (int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            fin >> arr[i][j];
        }
    }
    vector<vector<int>> dp(m + 2, vector<int> (n + 1, 0));
    int i = n, j = 0;
    dp[0][0] = 1;
    for (int i = 0; i <= m + 1; i++){
        dp[0][i] = INT32_MAX;
    }
    for (int i = 0; i <= m + 1; i++){ 
        dp[n][i] = INT32_MAX;
    }
    for (int j = 0; j <= n ; j++){
        dp[j][0] = 0;
    }
    for(int j = 1; j < n + 1; j++){
        for(int i = 1; i < m + 1; i++){
            dp[i][j] = min(min(dp[i-1][j-1],dp[i][j-1]),dp[i+1][j-1]) + arr[i - 1][j - 1];
        }  
    }
    
    
    fout << dp[m][n];


    fin.close();
    fout.close();
    return 0;
}