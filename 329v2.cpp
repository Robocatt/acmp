#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

int dp[10001] = {0};

int f(int n){
    if (dp[n] != 0  || n == 1 || n == 2) {
        return dp[n];
    }
    else {
        return max(f(n - 1), f(n - 2));
    }
}



int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");
    int n;
    fin >> n;
    vector<int> arr(n + 1);
    vector<vector<int>> s(10001,vector<int>(0,0));
    for(int i = 1; i < n + 1; i++){
        fin >> arr[i];
    }
    arr[0] = 0;
    s[0].push_back(0);
    s[1].push_back(1);
    arr[2] > arr[1] + arr[2] ? s[2].push_back(2) : (s[2].push_back(1), s[2].push_back(2));
    dp[0] = 0; 
    dp[1] = arr[1];
    dp[2] = max(arr[2],arr[1] + arr[2]);  
    for(int i = 3; i < n + 1; i++){
        int temp = f(i);
        dp[i] = temp + arr[i]; // MAX
        temp == f(i - 1) ? (s[i] = s[i - 1], s[i].push_back(i)) : (s[i] = s[i - 2], s[i].push_back(i));
    }
    
    
    fout << dp[n] << endl;
    for (int i = 0; i < s[n].size();i++){
        fout << s[n][i] << " ";
    }

    fin.close();
    fout.close();
    return 0;
}