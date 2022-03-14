#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    for(int i = 1; i < 1000; i++){
        int a = 43,n = i,r = 0;
        while(n > 0){
            if(n % 2 == 1){
                r+=a;
            }
            a = a << 1;
            n /= 2;
          }
        if(r == 1075){
            cout << i;
            break;
        }
    }
}