#include <iostream>

using namespace std;

long long gcd(int a, int b){
    return (b == 0 ? a : gcd(b, a % b));
}

long long lcm (int a, int b){
    return a / gcd(a, b) * b;
}

int main(){
    long long n, m;
    cin >> n >> m;
    cout << lcm(n,m) / m;



}