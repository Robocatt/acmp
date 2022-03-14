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

vector<int> zfunction(string &str){
    int n = str.size();
    vector<int> z(n,0);
    int l = 0;
    int r = 0;

    for(int i = 1; i < n; i++){
        if(i <= r){
            z[i] = min(z[i - l], r - i + 1);
        }

        while(i + z[i] < n && str[i + z[i]] == str[z[i]]){
            z[i]++;
        }

        if(i + z[i] - 1 > r){
            l = i;
            r = i + z[i] - 1;
        }
    }
    return z;
}



int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s, t;
    getline(cin,s);
    getline(cin,t);
    string x = t + '#' + s;
    vector<int> ans = zfunction(x);
    for(int i = 0; i < ans.size() - t.size(); i++){
        if(ans[i + 1 + t.size()] == t.size()){
            cout << i  << " ";
        }
    }
    

    return 0;
}