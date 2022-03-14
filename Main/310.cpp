#include <iostream>
#include <string>
using namespace std;

int main(){
    int k, x = 0, y = 0, a = 0;
    cin >> k;
    for(int i = 0; i < k; i++){
        cin >> x >> y >> a;
        if(x % a == 0 && ((y - 2) % a == 0)){
            cout << 1;
            
        }
        else if ( ((x - 1) % a == 0) && (((y - 2) % a == 0 && (y % a) == 0) || ((y - 1) % a == 0))){
            cout << 1;
            
        }
        else if( ((x - 2) % a == 0) && (y % a == 0) ){
            cout << 1;
            
        }
        else if ( ((x - 2) % a == 0) && (x % a == 0) && ((y - 1) % a == 0) ){
            cout << 1;
        }else{
            cout << 0;
        }
        
    }
    



    return 0;
}