#include <iostream>
using namespace std;


int main(){ 
    double sum = 0;
    double n;
    double r = 2;
    cin >> n;
    while (sum < n){
        sum = sum + 1 / r;
        r++;
    }
    cout << r - 2 << " card(s)"<< endl;
     return 0; 
} 