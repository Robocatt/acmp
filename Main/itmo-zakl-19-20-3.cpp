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
bool f1(bool x, bool y, bool z){
    return (!(x && y) || z) == (x || y && z);
}
bool f2(bool x, bool y, bool z){
    return (!(y && z) || x) == (y || x && z);
}
bool f3(bool x, bool y, bool z){
    return (!(x && z) || y) == (z || y && x);
}

bool f4(bool x, bool y, bool z){
    return x && (!z || y ) || z && (!x || y);
}


int main(){
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            for(int k = 0; k < 2; k++){
                cout << f1(i,j,k) <<f2(i,j,k) << f3(i,j,k)  << " " << f4(i,j,k) << endl;
                //cout << (f1(i,j,k) && !f2(i,j,k) || f3(i,j,k))  << " " << f4(i,j,k) << endl;
            }
        }
    }

    return 0;
}