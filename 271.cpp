#include <iostream>


using namespace std;


unsigned long long cache[47] = {0};

unsigned long long fi (int n){
    if (n <= 1) 
        return n;
    if (cache[n]== 0)
        cache[n] = fi(n - 1) + fi(n - 2); 
    return cache[n]; 
}




int main() {
    fi(46);
    unsigned long long n;
    cin >> n;
    for (int i = 3; i < 47; i++){
        if(cache[i] == n){
            cout << 1 << endl << i;
            return 0;
        }
        
    }

    cout << 0;
    


    return 0;
}