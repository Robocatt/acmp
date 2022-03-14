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
    vector<multiset<char>> arr(n);
    for (int i = 0; i < n; i++){
        string s;
        cin >> s;
        for (int j = 0; j < s.size(); j++){
            arr[i].insert(s[j]);
        }
    }
    int maxx = INT16_MIN;
    for (int i = 0; i < n; i++){
        int count = 0;
        for (int j = 0; j < n; j++){
            if(arr[i] == arr[j]){
                count ++;
            }
        }
        maxx = max(maxx, count);
    }
    cout << maxx;
    return 0;
}