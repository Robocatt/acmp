#include <iostream>
#include <cmath>
using namespace std;


bool prime(long long n){ 
	for(long long i = 2; i <= sqrt(n); i++)
		if(n % i == 0)
			return false;
	return true;
}

void pck(long long n){
    if ((n == 1 || n == 4 || n == 6 || n == 8 || n == 9)){
            cout << 0;
    }else if ( prime(n)){
        cout << n;
    }else{
        long long sum = 0;
        while(n > 0){
            sum += n % 10;
            n /= 10;
        }
        pck(sum);
    }
}

int main(){
    long long n;
    cin >> n; 
    pck(n);



    return 0;
}