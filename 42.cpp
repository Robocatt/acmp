#include <iostream>
#include <cmath>
using namespace std;
int main(){
    long long  n,count = 0;
    cin >> n;
    if(n == 1){
        cout <<  1;
    }else if(n % 3 == 0){
        cout << (long long)pow(3, n / 3);
    }else if (n % 3 == 2){
        cout << (long long)pow(3, n / 3) * 2;
    }else{
        cout << (long long)pow(3, n / 3) * 4 / 3;
    }




    return 0;
}