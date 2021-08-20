#include <iostream>

using namespace std;




int main(){ 
    int n, a, b;
    cin >> n;
    if(n % 5 == 0){
        cout << n / 5 << " " << 0;
    }else if (n % 5 == 1){
        cout << n / 5 - 1 << " " << (n - (5 * ((n / 5) - 1))) / 3;
    }else if (n % 5 == 2){
        cout << n / 5 - 2 << " " << (n - (5 * ((n / 5) - 2))) / 3;
    }else if (n % 5 == 3){
        cout << n / 5 << " " << 1;
    }else if (n % 5 == 4){
        cout << n / 5 - 1 << " " << (n - (((n / 5) - 1) * 5))/3;
    }



    return 0; 
} 