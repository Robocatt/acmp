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


int main(){
    ll d1,d2,d3,d4,d5,d6,d7,d8,d9,out;
    d1 = 137;
    d2 = 214;
    d6 = 132;
    d8 = 111;
    d9 = 74;
    for(int i = 1; i < 10000; i++){
        d5 = i;
        d4 = min(1343ll, 4 * d5 + 6 * d9 + 29);
        d7 = min(4124ll, 5 * d2 + 2 * d4 + 3 * d8 + 38);
        d3 = min(4043ll, d1 + 3 * d4 + 4 * d6 + 63);    
        out = 142 + 2 * d3 + 3 * d7;
        if(out < 17647){
            cout << i << endl;
            
        }
    }



    return 0;
}