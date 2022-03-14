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

void reduce(int n, map<int,vector<int>> &char_where, vector<int> &arr){
    for(int i = 0; i < char_where[n].size(); i++){
        arr[char_where[n][i]]--;
    }
}

int get(int n, vector<int> &arr){
    return arr[n];
}

int main(){
    int n;
    cin >> n;
    map<int,vector<int>> char_where;
    vector<int> arr(n + 1, 0);

    for(int i = 1; i <= n; i++){
        int k;
        cin >> k;
        for(int j = 0; j < k; j++){
            int a;
            cin >> a;
            char_where[a].push_back(i);
            arr[i]++;
        }
    }
    cin >> n;
    for(int i = 0; i < n; i++){
        char c;
        int a;
        cin >> c >> a;
        if(c == '-'){
            reduce(a, char_where, arr);
        }else{
            cout << get(a, arr) << endl;
        }
    }

    return 0;
}