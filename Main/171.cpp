#include <iostream>
#include<vector>

typedef unsigned long long ull;



using namespace std;
int main(){
    ull n; 
    cin >> n;
    vector<bool> prime (n + 1, true);
    prime[0] = prime[1] = false;
    for (int i = 2; i <= n; i++){
	    if (prime[i]){
		    if (i * i <= n){
			    for (int j = i * i; j <= n; j+= i){
				    prime[j] = false;
                }
            }
        }
    }
    long long count = 0;
    for(int i = 0; i < prime.size(); i++){
        if(prime[i] && n % i == 0){
            count ++;
        }
    }

    cout << count;

    return 0;
}