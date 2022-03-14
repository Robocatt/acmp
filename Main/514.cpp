#include <iostream>
#include <string>
using namespace std;

int main(){
    int k;
    cin >> k;
    long long l = 1;
    long long r = 1414;
    while(r - l > 1){
        long long mid = l + (r - l ) / 2;
        double y = ((double(2 + mid - 1) / 2) * mid);
        if(y > k){
            r = mid;
        }else{
            l = mid;
        }

    }
    
    cout << l;


    return 0;
}