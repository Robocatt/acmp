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
    string s;
    while(n > 0){
        s.push_back(n % 3 + '0');
        n /= 3;
    }
    reverse(s.begin(),s.end());
   
    for(int i = 0; i < 5; i++){
        if(s.find("10") != string::npos){
            s.replace(s.find("10"), 2, "03");
        }
        if(s.find("20") != string::npos){
            s.replace(s.find("20"), 2, "13");
        }
        if(s.find("30") != string::npos){
            s.replace(s.find("30"),2, "23");
        }
    }


    for(int i = 0; i < s.size();i++){
        if(s[i] == '0'){
            s.erase(s.begin());
        }else{
            break;
        }
    }
    
    cout << s;


    return 0;
}