#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;


int main(){
    int n;
    int count = 0;
    cin >> n;
    if (n < 4){
        cout << 0;
        return 0; 
    }
    for(int i = 1; i <= n / 4; i++){
        for (int j = 1; j <= n / 3; j++){
            for(int k = 1; k <= n / 2; k++){
                int d = n - i - j - k;
                if( d >= k && k >= j && j >= i){
                    count ++;
                }
            }
        }
    }
    
    cout << count; 

    return 0;
}