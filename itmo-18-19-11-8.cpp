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
    string s = "ABBA";
    int n = 10000,count_a = 0,count_b = 0,count_c = 0;
    while(true){
        for (int i = 0; i < s.size();i++){
            if(s[i] == 'A'){
                s.replace(i,1,"CBBC");
            }
        }
        if(s.size() > n){
            break;
        }
        for (int i = 0; i < s.size();i++){
            if(s[i] == 'C'){
                s.replace(i,1,"ABBA");
            }
        }
        if(s.size() > n){
            break;
        }
    }
    for(int i = 0; i < s.size();i++){
        if(s[i] == 'A'){
            count_a ++;
        }else if(s[i] == 'B'){
            count_b ++;
        }else{
            count_c ++;
        }
    }
    cout << count_a << " " << count_b << " " << count_c;

    return 0;
}