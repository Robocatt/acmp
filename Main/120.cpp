#include <fstream>
#include <vector>
using namespace std;


int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");
    int n, m;
    fin >> n >> m;
    vector<vector<int> > arr(n,vector <int> (m));
    for (int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            fin >> arr[i][j];
        }
    }
    vector<vector<int>> dp(n + 1, vector<int> (m + 1, 0));
    for(int k = 0; k < m + 1; k++){
        dp[0][k]=INT32_MAX;
    }
    for(int k = 2; k < n + 1; k++){
        dp[k][0]=INT32_MAX;
    }
    dp[0][0] = 0;
    for(int i = 1; i < n + 1; i++){
        for(int j = 1; j < m + 1; j++){
            dp[i][j]=min(dp[i-1][j], dp[i][j-1]) + arr[i-1][j-1];
        }
    }
    
    fout << dp[n][m];

    fin.close();
    fout.close();
    return 0;
}