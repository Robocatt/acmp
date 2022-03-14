#include<iostream>
#include<iomanip>
#include<vector>
#include<set>
#include<queue>
#include<deque>
#include<map>
#include<algorithm>
#include<cmath>
using namespace std;



int main(){
    for(int i = 0; i < 20; i++){
        if( ((245 | i) & (187 ^ (~i))) == 85 ){
        cout << i;
        }
        
    }
    

    return 0;
}