#include <iostream>
using namespace std;
int f(int n){
    int k = 0;
    while(n != 2){
        n = (n % 2 == 0 ? n / 2 : 3 * n + 1);
        k++;
    }
    return k;

}

int main(){
    int p,k,count = 0;
    cin >> p >> k;
    for(int i = p; i <= k; i++){
        count += f(i);
    }
    cout << count;


    return 0;
}
