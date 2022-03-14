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
    string s = "ABCBA";
    while (true){
        for (int i = 0; i < s.size();i++){
            if(s[i] == 'C'){
                s.replace(i,1,"BCB");
                i+=2;
            }
        }
        while(s.find("BB") != string::npos){
            s.replace(s.find("BB"),2,"ABA");
        }
        while(s.find("AA") != string::npos){
            s.replace(s.find("AA"),2,"ACA");
        }
        int count = 0;
        for(int i = 0; i < s.size();i++){
            if(s[i] == 'C'){
                count ++;
            }
        }
        if(count > 500){
            break;
        }
    }
    cout << s[500-1] << " " << s[1001 - 1] << " " << s[2002 - 1];

    return 0;
}