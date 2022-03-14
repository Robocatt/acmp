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
    int n, k;
    cin >> n >> k;
    if(n == k){
        cout << 1;
        return 0;
    }
    vector<vector<long long>> more(n + 1,vector<long long> (n + 1 )), less(n,vector<long long> (n + 1));
    more[n][n] = 1;
    less[n][n] = 1; 
    long long x = 0;
    for(int i = k + 1; i < n; i++){
        x += less[n - k][i];
    }
    more[n][k] = x;
    for(int i = 1; i < k - 1; i++){
        x += more[n - k][i];
    }
    less[n][k] = x;
    cout << more[n][k] + less[n][k];
    

    return 0;
}