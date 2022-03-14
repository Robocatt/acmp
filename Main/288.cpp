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
    while(getline(cin, s)){
        int count = 0;
        bool brace_o = false, paren_o = false;
        for(int i = 0; i < s.size(); i++){
            // учесть кавычки
            if(s[i] == '/' && s[i+1] =='/'){
                count ++;
                break;
            }else if()
        }
    }
    

    return 0;
}