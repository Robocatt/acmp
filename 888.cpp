#include <iostream>
using namespace std;



int main(){
    long long n,count = 0,price = 3;
    cin >> n;
    for(long long i = 0; i < n; i++){
        long long temp;
        cin >> temp;
        if(temp == 1){
            count += price;
            price++;
        }else{
            if(price >= 6){
                price -=3;
            }else{
                price = 3;
            }
        }
    }
    cout << count;


    return 0;
}