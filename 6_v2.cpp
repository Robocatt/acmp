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
    string s;
    cin >> s;
    if (s.size() < 5 || s[0] > 'H' || s[0] < 'A' || s[3] > 'H' || s[3] < 'A' || s[2] != '-' || 
    !(s[1] >= '1' && s[1] <= '8') || !(s[4] >= '1' && s[4] <= '8')){
        cout << "ERROR";
        return 0;
    }
    if (abs((s[0]-s[3])*(s[1]-s[4]))==2){
        cout << "YES";
    }else{
        cout << "NO";
    }
    

    return 0;
}