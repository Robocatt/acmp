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

string dict = "ABCEHKMOPTXY";
bool check(string s){
    if(s.size() == 6 && dict.find(s[0]) !=string::npos && dict.find(s[4]) !=string::npos && dict.find(s[5]) !=string::npos 
    && isdigit(s[1]) && isdigit(s[2]) && isdigit(s[3])){
        return true;
    }
    return false;
}


int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        cout << (check(s) ? "Yes" : "No") << endl;
    }
    
    

    return 0;
}