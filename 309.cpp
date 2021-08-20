#include <iostream>

using namespace std;



int main(){
    int n, count = 0;
    cin >> n;
    for(int i = 1; i <= n; i++){
        int rev = 0, cur = i, cur_f = i;
        while(cur != 0){
            rev = rev * 10 + cur % 10;
            cur /= 10;
        }
        if(cur_f + rev == n){
            count ++;
        }
    }

    cout << count;

    return 0;
}