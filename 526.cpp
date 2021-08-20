#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

int main() {
    string a,b;
    cin >> a >> b;
    bool f = true;
    reverse(a.begin(),a.end());
    for(int i = 2; i <= 36; i++){
        long long num = 0;
        for(int j = 0; j < a.size(); j++){
            if(!isdigit(a[j])){
                if(a[j] - 55 >= i){
                    continue;
                }
                num += (a[j] - 55) * pow(i,j);
            }else{
                if(a[j] - 48 >= i){
                    continue;
                }
                num += (a[j] - 48) * pow(i,j);
            }
        }
        if (to_string(num) == b){
            cout << i;
            f = false;
            break;
        }
    }
    if (f){
        cout << 0;
    }
    return 0;
}