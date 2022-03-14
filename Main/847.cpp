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
    string a,b;
    cin >> a >> b;
    set<char> sea, seb;
    if(a.size() != b.size()){
        cout << "NO";
        return 0;
    }
    for(int i = 0; i < a.size(); i++){
        sea.insert(a[i]);
        seb.insert(b[i]);
        if(a[i] == b[i]){
            cout << "NO";
            return 0;
        }
    }
    if(sea != seb){
        cout << "NO";
        return 0;
    }
    cout << "YES";

    return 0;
}