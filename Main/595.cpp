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
    
    string s, s2;
    getline(cin, s);
    getline(cin, s2);
    string rev = s2;
    reverse(rev.begin(), rev.end());
    if(s == rev){
        cout << "Yes" << endl << s.size();
        return 0;
    }

    string n_str = s2 + '#' + s; 
    vector<int> arr = zfunction(n_str);
    pair<int,int> maxx={-1,-1}; //idx, mean
    for(int i = s.size() + 1; i < arr.size(); i++){
        if(maxx.second < arr[i]){
            maxx.first = i;
            maxx.second = arr[i];
        }
    }
    string n_beg = n_str.substr(0, maxx.second);
    string n_end = n_str.substr(maxx.second, s2.size() - maxx.second);
    reverse(n_end.begin(),n_end.end());
    if(n_end + n_beg == s){
        cout << "Yes" << endl << n_end.size();
    }else{
        cout << "No";
    }

    
    cout << " ";


    


    return 0;
}