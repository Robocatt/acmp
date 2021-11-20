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
    vector<vector<int>> s(101,vector<int> (101,0));
    for (int i = 0; i < n; i++){
        cin >> s[i][i];
    }
    if (n == 1) { 
    cout << s[0][0]; 
    return 0;
    }
    for (int j = 0; j < n - 1; j++){
        for (int i = 1; i < n - j + 1; i++){
                if ((n - j) % 2 == 0) {
                    s[i + j][i - 1] = max(s[i + j - 1][i - 1], s[i + j][i]);
                }
                else s[i + j][i - 1] = min(s[i + j - 1][i - 1], s[i + j][i]);
        }
    }
    cout << s[n - 1][0];
       return 0;
}