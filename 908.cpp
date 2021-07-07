#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

int dp[1000001] = {0,0,1,1,};

int f (int n){
    if (dp[n] > 0){ 
        return dp[n];
    }
    else if (n % 3 == 0){
        return f(n / 3) + 1;
    }else if (n % 2 == 0){
        return min(f(n / 2) + 1,f(n-1)+1);
    }else {
        return min(f(n - 1) + 1, f(n - 2) + 2);
    }
    
}



int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");
    int n;
    fin >> n;
    for (int i = 4; i < n + 1; i++){
        dp[i] = f(i);
    }
    fout << dp[n];

    fin.close();
    fout.close();
    return 0;
}