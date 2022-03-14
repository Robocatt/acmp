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
    int count = 0;
    for(int i = 1; i < 20000; i++){
        bool f = true;
        for(int j = 0; j < 79; j++){
            if((j + 79 * j) % i != 0){
                f = false; 
                break;
            }
        }
        if(f){
            cout << i << endl;
            count++;
        }
    }
    cout << endl << count; 

    return 0;
}