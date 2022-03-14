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

int n(int x){
    double c = 1024 * 1024 / x;
    int k = ceil(double(900) / x);
    return c / double(k);
}

int main(){
    for(int x = 1; x < 50 ; x++){ 
        cout << n(x) <<" "<< n(2*x) << endl;
        if(n(x) - n(2*x) == 20){
            cout << x;
            break;
        }
        
    }

    return 0;
}