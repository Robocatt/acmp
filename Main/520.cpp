#include <iostream>

using namespace std;
typedef long long ll; 

int main() {
       ll n;
       cin >> n;
       ll a, b, c;
       a = n / 144;
       ll amin, bmin, cmin;
       ll pricemin = n * 1050;    
       for (ll i = a; i <= a + 1; i++) {
            b = (n - i * 144) / 12; 
            if (b < 0){
                b = 0; 
            }
             for (ll j = b; j <= b + 1; j++)  { 
                    c = n - i * 144 - j * 12;
                    if (c < 0){
                        c = 0; 
                    }
                    ll price = i * 114000 + j * 10250 + c * 1050;
                    if (price < pricemin){ 
                           pricemin = price;
                           amin = i;
                           bmin = j;
                           cmin = c;
                    }
             }
       }

       cout << amin << " " << bmin << " " << cmin;
       return 0;
}