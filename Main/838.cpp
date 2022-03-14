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
    string s1 = "abcdefghijklmnopqrstuvwxyz";
    string s2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string s3 = "0123456789";
    string s4 = { '=','+','-','\'','\"' };
    string s5 = "{}[]<>";
    string s;
    int q = 0;

    while(getline(cin, s)){
        for(int i = 0; i < s.size(); i++){
            int n;
            if (s1.find(s[i]) != string::npos) {
                n = s1.find(s[i]);
                q += (n + 1) % 10 + (n + 1) / 10;
            }
            else if (s2.find(s[i]) != string::npos){
                n = s2.find(s[i]);
                q += 10 + (n + 1) % 10 + (n + 1) / 10;
            }
            else if (s3.find(s[i]) != string::npos){
                n = s3.find(s[i]);
                q += 13 - n;
            }
            else if (s4.find(s[i]) != string::npos){
                q += 3;
            }
            else if (s5.find(s[i]) != string::npos){
                q += 8;
            }
            else if (s[i] == ' '){
                q += 4;
            }
            else if (s[i] == '.'){
                q += 5;
            }
            else if (s[i] == ';'){
                q += 7;
            }
            else if (s[i] == ','){
                q += 2;
            }
            else if (s[i] == '(' || s[i] == ')'){
                q++;
            }
        }
    }
    cout << q;

    return 0;
}