#include <iostream>
using namespace std;

int main(){
    cout << "0,";
    double x = 0.22222222222222222222;
    for(int i = 0; i < 30; i++){
        x*= 2;
        if(x > 1){
            x-=1;
            cout << 1;
        }else{
            cout << 0;
        }
    }



    return 0;
}