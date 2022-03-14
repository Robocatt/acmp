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

string to_d(int n){
    string s;
    while(n > 0){
        s.push_back(n % 2 + '0');
        n /= 2;
    }
    reverse(s.begin(), s.end());
    return s;
}
bool f(int num){
    string s = to_d(num);
    while(s.size() < 8){
        s.insert(s.begin(),'0');
    }

    int x0 = s[7] - '0';
    int x1 = s[6] - '0';
    int x2 = s[5] - '0';
    int x3 = s[4] - '0';
    int x4 = s[3] - '0';
    int x5 = s[2] - '0';
    int x6 = s[1] - '0';
    int x7 = s[0] - '0';

    bool f1 = (!(x0 ^ x1) || x2) || (!(x3 ^ x4) || !x5) || (!(x6 ^ x7) || x2);

    bool f2 = (!(x0 ^ x5) || !x7) || (!x1 ^ x4 || x6) ||(!(x3 ^ x4) || x2);

    return !f1 && !f2;

}


int main(){
    for(int i = 0; i < 256; i++){
        if(f(i)){
            cout << i;
        }
    }

    return 0;
}