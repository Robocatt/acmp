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
    for(int i = 200000000; i < 300000000; i ++){
        
        int  n = i, r = 0, k = 0, l = 10, t;

        int num = 0;
        bool f = true;

        while(k < 9){
            num++;
            int m = 0, s = 0;
            while(s < 9){
                int z = (n / int(pow(10, s))) % 10;
                if(z > m && z < l){
                    m = z;
                    t = s;
                }
                s++;
            }
            if(m > 0){
                r = r * 10 + t;
                k++;
                l = m;
            }
            if(num > 10){
                f = false;
                break;
            }
        }
        if(f && r == 473160285){
            cout << "!!!" << i << endl;
        }
    }

    return 0;
}