#include<iostream>
#include<iomanip>
#include<vector>
#include<set>
#include<queue>
#include<deque>
#include<map>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){
    string s = "1234567";
    while(s.size() < 2050){
        string x = s.substr(s.size()-7);
        string g = x.substr(0,3);
        x.erase(0,3);
        x.append(g);
        s.append(x);
    }
    
    cout << s[1023] << " " << s[2047];
    return 0;
}