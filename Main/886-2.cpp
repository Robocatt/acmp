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

vector<int> zfunction(string &s){
    int n = s.size();
    vector<int> z(n, 0);
    z[0] = n;

    int l = 0;
    int r = 0;

    for(int i = 1; i < n; i++){
        if(i <= r){
            z[i] = min(z[i - l], r - i + 1);
        }

        while(i + z[i] < n && s[i + z[i]] == s[z[i]]){
            z[i] ++;
        }

        if(i + z[i] - 1 > r){
            l = i;
            r = i + z[i] - 1;
        }
    }

    return z;
}


int main(){
    string str;
    getline(cin, str);

    vector<int> z = zfunction(str);
    string cur = "";
    int count = 0;
    for(int i = 1; i < z.size(); i++){
        if(i + z[i] == str.size() && int(str.size()) % i == 0){
            cur = str.substr(i);
        }
    }
    

    cout << count;
    

    return 0;
}