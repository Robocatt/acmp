#include<iostream>
#include<iomanip>
#include<vector>
#include<set>
#include<queue>
#include<deque>
#include<map>
#include<algorithm>
#include<cmath>
#include<string>
using namespace std;


int main(){
    long long n, a;
    cin >> n >> a;

    while(n > 1){
        long long  before = floor(a / 2.0);
        long long new_n = a - before;
        cout << (a % 2 == 0 ? 1 : 0) << " ";
        if(a % 2 == 0){
            if( n % 2 == 0 ){
                n -= n / 2;
            }else{
                n-= ceil(n / 2.0);
            }
        }else{
            if( n % 2 == 0 ){
                n -= n / 2;
            }else{
                n-= floor(n / 2.0);
            }
        }
        a = new_n; 
    }
    

    return 0;
}