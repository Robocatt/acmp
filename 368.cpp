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
    int n;
    cin >> n;
    vector<vector<int> > arr(n,vector <int> (n));
    vector<vector<char> > arrc(n + 1,vector <char> (n + 1,'.'));
    string tmp;
    getline(cin,tmp);
    for (int i = 0; i < n; i++){
        string s;
        getline(cin,s);
        for(int j = 0; j < n; j++){
            arr[i][j] = s[j] - '0';
        }
    }
    vector<vector<int>> dp(n + 1, vector<int> (n + 1, 0));
    for(int k = 0; k < n + 1; k++){
        dp[0][k]=INT32_MAX;
    }
    for(int k = 2; k < n + 1; k++){
        dp[k][0]=INT32_MAX;
    }
    dp[0][0] = 0;
    arrc[0][0] = '#';
    for(int i = 1; i < n + 1; i++){
        for(int j = 1; j < n + 1; j++){
            dp[i][j] = min(dp[i-1][j], dp[i][j-1]) + arr[i-1][j-1];

        }
    }
    
    for(int i = 0; i < n + 1; i++){
        for(int j = 0; j < n + 1; j++){
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    

    return 0;
}