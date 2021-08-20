#include <iostream>
#include <string>
using namespace std;

bool f(int a, int b, int k, int w){
    return (b >= k) && (a <= w);
}


int main(){
    int a1, b1, a2, b2, a3, b3, k, w;
    cin >> k >> w >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;
    cout << ((f(a1,b1,k,w) || f(a2,b2,k,w) || f(a3,b3,k,w) || f(a1 + a2,b1 + b2,k,w) || f(a2 + a3,b2 + b3,k,w) || f(a1 + a3,b1 + b3,k,w) || f(a1 + a2 + a3,b1 + b2 + b3,k,w)) ? "YES" : "NO");


    return 0;
}