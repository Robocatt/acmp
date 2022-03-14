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
bool f(bool a, bool b, bool c, bool d){
    return !(!( (!(!(a && b)||(!b&&c))->!() )           )                  )
}

int main(){
    for(int a = 0; a < 2; a++){
        for(int b = 0; b < 2; b++){
            for(int c = 0; c < 2; c++){
                for(int d = 0; d < 2; d++){
                    cout << a << b << c << d << f(a,b,c,d) << endl;
                }
            }
        }
    }

    return 0;
}