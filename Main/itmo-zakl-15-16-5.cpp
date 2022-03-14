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
    for(int i = 10; i < 100; i++){
        bool f = true;
        int w = i, k = 1;
        vector<int> a(1000);
        a[k] = w;

        while(w != 85 && k < 7){
            int s = 0;
            while(w != 0){
                int c = w % 10;
                s = s + c * c;
                w = w / 10;
            }
            w = s;
            k++;
            if(w < 10 || w > 99){
                f = false;
            }
            a[k] = w;
        }
        if(k == 5 && f){
            cout << i << " ";
        }
    }



    return 0;
}