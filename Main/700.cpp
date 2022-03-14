#include <iostream>

using namespace std;

int main(){
    long long  n, v , k, store;
    cin >> n >> v >> k;
    store = v;
    bool f = true;
    for (int i = 1; i < n ; i++){
        if( (v - i*k) <= 0){
            f = false; 
            break;
        }
        store += v - i*k;
    }
    cout << (f ? "YES" : "NO") << " " << store;
    
    
    
    
    return 0;
}