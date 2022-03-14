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

    for(int i = 1000; i < 100000; i++ ){
        int w = i;
        int s = 0, d = 0, a = 0, p = 1;
        while(w > 0){
            int c = w % 10;
            int k = c + d + a;
            s = s + (k % 10) * p;
            d = k / 10;
            a = c;
            p = p * 10;
            w = w / 10;
        }
        s = s + (a + d) * p;
        if(s == 96415){
            cout << i << endl;
        }

    }




    return 0;
}