#include <iostream>
#include <string>
using namespace std;

int main(){
    string c;
    int x;
    cin >> c >> x;  
    if (c[0] == 'H' || (c[0] == 'S' && x % 2 == 1)){
        cout << "Yes";
    }else{
        cout << "No";
    }
    



    return 0;
}