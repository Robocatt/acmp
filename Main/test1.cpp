#define PI 3.14159265
#include<iostream>
#include<fstream>
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
    
    for (long long i = 46000000; i < 5000000000; i++){
        long long x = i;
        long long a = 3, b = 24,w = 8;
        while(x > 0){
            long long d = x % w;
            a *= d;
            if(d < 5){
                b+=d;
            }
            x/=w;
            w = 11 - w;
        }

        if(a == 90 && b == 37){
            cout << i << endl;
            

        }
    }

    return 0;
}




   
