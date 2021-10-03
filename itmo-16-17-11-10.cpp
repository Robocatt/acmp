#include<iostream>
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
    
    int r=1,s=0;
    for(int j = 1; j < 100000; j++){
        for(int i = 1; i < 100000; i++){
            r = 1;
            s = 0;
            int v = i;
            int p = j;
            while(p > 0){
                if(s > 2){
                    break;
                }
                if(p % 2 == 1){
                    r = r * v;
                    s++;
                }
                v = v * v;
                p /= 2;
            }
            if(s == 2 && r == 531441){
                cout << j << " " << i << endl;
            }
            
        }
    }
    


    return 0;
}