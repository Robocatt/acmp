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

bool f1(bool a, bool b){
    return a && !b;
}
bool f2(bool b, bool c){
    return b && !c;
}
bool f3(bool c, bool d){
    return c && !d;
}
bool f4(bool d, bool e){
    return d && !e;
}


int main(){
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            for(int k = 0; k < 2; k++){
                for(int l = 0; l < 2; l++){
                    for(int e = 0; e < 2; e++){
                        cout << bool(!(!(!f2(j,k) || f1(i,j)) ||f3(k,l)) || f4(l, e))  << endl;
                    }
                }
            }
        }
    }
    

    return 0;
}