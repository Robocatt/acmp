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

string gen(string prev){
    string n = "";
    for(int i = 0; i < prev.size();i++){
        n.push_back(prev[i]);
        n.push_back(prev[i] + 1);
    }
    return n;
}

int main(){
    string s = "1111";
    for(int i = 0; i < 8; i++){
        s = gen(s);
    }
    int count5 = 0, count7 = 0;
    for(int i = 0; i < s.size();i++){
        if(s[i] == '5'){
            count5++;
        }else if (s[i] == '7'){
            count7++;
        }
    }
    cout << s << endl;
    cout << count5 << " " << count7;

    return 0;
}