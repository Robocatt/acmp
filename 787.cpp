#include <fstream>
#include <vector>
using namespace std;


int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");
    int n;
    fin >> n;
    vector<vector<int> > arr(n,vector <int> (n,0));
    for (int i = 0; i < n; i++){
        fin >> arr[i][i];
    }
    vector<vector<int>> dp(n, vector<int> (n, 0));
    int i = n, j = 0;
    for(int i = n; i < 0; i--){
        for(int j = 0; j < n + 1; j++){
            dp[i][j]=min(dp[i-1][j], dp[i][j-1]) + arr[i-1][j-1];
        }
        for(int j = 0; j < n + 1; j++){
            max(dp[i-1][j], dp[i][j-1])
        }
    }
    
    
    fout << dp[n][m];

    fin.close();
    fout.close();
    return 0;
}