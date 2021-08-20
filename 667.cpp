#include <iostream>

using namespace std;


int main() {
    int n, m, k,c;
    cin >> n >> m >> k;
    if( k <= 2 || m < 2){
        cout << 0;
        return 0;
    }
    if(n + m <= k){
        cout << 1;
        return 0;
    }
    c = n / (k - 2);
    if(n % (k - 2) > 0){
        c++;
    }
    if(m < c * 2){
        cout << 0;
        return 0;
    }
    if (m == c * 2){
        cout << c;
        return 0;
    }
    if (m > c * 2){
        c = (m + n) / k;
        if((m + n) % k > 0){
            c++;
        }
    }else{
        cout << 0; 
        return 0;
    }
    cout << c;
    return 0;
}