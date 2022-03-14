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

void add_to_arr(int at, string s, vector<vector<string>> &arr){
    string cur, del = ",";
    int pos = 0;
    arr.push_back({});
    while((pos = s.find(del)) != string::npos){
        cur = s.substr(0, pos);
        arr[arr.size() - 1].push_back(cur);
        s.erase(0, pos + del.size());
    }
    if(s.size() != 0){
        arr[arr.size() - 1].push_back(s);
    }
    if(arr.size() > 1 && arr[arr.size() - 1].size() != arr[0].size()){
        arr[arr.size() - 1].push_back("");
    }
}

int main(){
    ifstream fin("input.txt");
    string s;
    vector<vector<string>> arr;
    int i = 0;
    while(getline(fin,s)){
        add_to_arr(i,s,arr);
        i++;
    }
    vector<string> ans;
    for(int i = 0; i < arr[0].size(); i++){
        bool f = false;
        for(int j = 1; j < arr.size(); j++){
            if(arr[j][i] != ""){
                f = true;
                break;
            }
        }
        if(f){
            ans.push_back(arr[0][i]);
        }
    }

    sort(ans.begin(),ans.end());
    cout << ans.size() << endl;
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << endl;
    }

    return 0;
}