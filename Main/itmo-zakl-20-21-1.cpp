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
    for(int x = 5; x < 37; x++){
        for(int y = 4; y <= 37; y++){
            int s = 2*( x * x + 1) -(y * y + 2);
            if(s == 1){
                cout << x << " " << y << endl;
            }
        }
    }

    return 0;
}