#include <iostream>
#include <string>
using namespace std;


unsigned long long cache[47] = {0};

unsigned long long fi (int n){
    if (n <= 1) 
        return n;
    if (cache[n]== 0)
        cache[n] = fi(n - 1) + fi(n - 2); 
    return cache[n]; 
}

int main(){
    cache[1] = 1;
    int x, y;
    cin >> x >> y;
    fi(x - 1);
    int a, b = 0;
    while ((y - cache[x - 1] * b) % cache[x - 2] != 0)
        b++;       
    a = (y - cache[x - 1] * b) / cache[x - 2];    
    cout << a << " " << b;



    return 0;
}