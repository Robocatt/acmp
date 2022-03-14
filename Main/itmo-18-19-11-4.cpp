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
    for(int n = 1; n < 100; n++){
        if(log2(pow(11,n)) <= 4*n-5){
            cout << n;
            break;
        }
    }
    

    return 0;
}