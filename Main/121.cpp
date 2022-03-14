#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");
    int n;
    fin >> n;
    vector<int> arr(n + 1);
    vector<int> dp(n + 1);
    arr[0] = 0;
    for(int i = 1; i < n + 1; i++){
        fin >> arr[i];
    }
    sort(arr.begin(),arr.end());
    dp[1] = 0;
    dp[2] = arr[2] - arr[1];
    dp[3] = arr[3] - arr[1];
    for(int i = 4; i < n + 1; i++){
        dp[i] = min(dp[i - 1] + (arr[i] - arr[i - 1]), dp[i - 2] + (arr[i] - arr[i - 1]));
    }

    fout << dp[n];

    fin.close();
    fout.close();
    return 0;
}