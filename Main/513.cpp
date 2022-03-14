#include <iostream>
#include <iomanip>
using namespace std;

double cache[33] = {1,1};
double fact(int a){
    if (cache[a] != 0) {
        return cache[a];
    }else{
        cache[a] = a * fact(a - 1);  
        return cache[a];
    }
    
}


int main(){
    int n;
    double count = 0;
    cin >> n;
    for(long long  i = 2; i < n + 1;i++){
        count +=  (fact(n) / (fact(i) * fact(n - i))); 
    }
    cout.precision(0);
    cout << fixed <<  count;


    return 0;
}