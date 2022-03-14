#define _USE_MATH_DEFINES
#include<iostream>
#include<fstream>
#include<vector>
#include<queue>
#include<deque>
#include<set>
#include<map>
#include<string>
#include<utility>
#include<cmath>
#include<algorithm>
typedef unsigned long long ul;
typedef long long ll;
using namespace std;
bool check(int x){
    string s = to_string(x);
    bool f = true;
    for(int j = 0; j < s.size() / 2; j++){
        if(s[j] != s[s.size() - 1 - j]){
            f = false;// check bound 
            return false;
        }
    }
    return true;
}


int get(int n){
    for(int i = 0; i < 3; i++){
        if(check(n)){
            return n;
        }
        string s = to_string(n);
        reverse(s.begin(),s.end());
        n = n + stoi(s);
    }
    if(check(n)){
        return n;
    }else{
        return -1;
    }
    
}


int main(){
    for(int i = 158; i < 11011; i++){
        int k = get(i);
        if(k == 11011){
            cout << i << endl;
            break;
        }
    }



    return 0;
}