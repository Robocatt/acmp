#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    int x = 0;
    if(a < 10){
        x = 20;
    }else if (a < 17){
        x = 24;
    }else if (a < 20){
        x = 29;
    }else{
        x = 34;
    }
    cout << x * 60 - ( a * 60 + b);
    return 0;
}