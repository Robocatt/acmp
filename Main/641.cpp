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
    int x;
    cin >> s >> x;
    long long x1 = x, x2 = x * x, x3 = x * x * x, x4 = x * x * x * x, result = 0;
    bool sign = false,num_cont = false;
    string temp_num;
    for(int i = 0; i < s.size(); i++){
        //multiply!
        if(!isdigit(s[i]) && num_cont){
            if(sign){
                result -= stoi(temp_num);
            }else{
                result += stoi(temp_num);
            }
        }
        if(s[i] == '-' || s[i] == '+'){
            if(s[i] == '-' ){
                sign = true;
            }
        }else if (isdigit(s[i]) ){
            num_cont = true;
            temp_num.push_back(s[i]);
        }
    }

    
    

    return 0;
}