#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    int base = 2;
    for(int i = 0; i < s.size(); i++){
        if(!((s[i] >= '0' && s[i] <= '9') || (s[i] >='A' && s[i] <= 'Z')) ){
            cout << -1;
            return 0;
        }else{
            if(s[i] <= '9' && s[i] >= '1'){
                base = max(base,s[i] - '0' + 1);
            }else if (s[i] >='A' && s[i] <= 'Z') {
                base = max(base,s[i] - 'A' + 11);
            }
        }
    
    }
    cout << base;




return 0;
}