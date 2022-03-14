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
    string chars = ".abcdefghijklmnopqrstuvwxyz";
    string s, ans;
    getline(cin, s);
    for(int i = 0; i < s.size(); i++){
        if (stoi(s.substr(i,2)) < 27){
            ans += chars[stoi(s.substr(i,2))];
            i++;
        }else{
            ans += chars[s[i] - '0'];
        }
    }
    cout << ans;

    return 0;
}