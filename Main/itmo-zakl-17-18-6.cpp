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
    //for(int w = 2; w < 1000; w++){
        vector<int> a (10000);
        
        int w;
        cin >> w;
        int m = 0, i = 100000, t = -1, k = -1;
        while(i <= 999999){
            t = i;
            k = 0;
            while(t != 0){
                a[k] = t % 10;
                t /= 10;
                k++;
            }
            if(a[5] == 5 && a[3] == 3 && a[1] == 2){
                if(i % 11 == 0 && i > m){
                    m = i;
                }
            }
            i++;
        }

        if(m == w){
            cout << w << " " <<"yes";
        }

    //}

    return 0;
}