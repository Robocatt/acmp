#define _USE_MATH_DEFINES
#include<iostream>
#include<fstream>
#include<vector>
#include<queue>
#include<deque>
#include<set>
#include<map>
#include<string>
#include<utility>
#include<cmath>
#include<algorithm>
typedef unsigned long long ul;
typedef long long ll;
using namespace std;

double from16(string s){
    int poww = -1;
    double cur = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 'A'){
            cur += pow(16, poww) * (10 + s[i] - 'A');
        }else{
            cur += pow(16, poww) * (s[i] - '0');
        }
        poww--;
    }
    return cur;
}

int main(){
    double e1 = from16("B6DB6DB6DB6D");
    double e2 = from16("A");
    cout << e1/e2;
    return 0;
}