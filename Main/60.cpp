#define _USE_MATH_DEFINES
#include<iostream>
#include<fstream>
#include<vector>
#include<queue>
#include<deque>
#include<set>
#include<map>
#include<string>
#include<utility>
#include<cmath>
#include<algorithm>
typedef unsigned long long ul;
typedef long long ll;
using namespace std;

int f (int x, int n){
    vector<bool> arr(n + 1,true);
    arr[0] = false;
    arr[1] = false;
    for(long long i = 2; i <= n; i++){
        if(arr[i]){
            if(i * i * 1ll <= n){
                for(long long j = i * i; j <= n; j+=i){
                    arr[j] = false;
                }
            }
        }
    }
    int count_primes = 0;
    int count_super_primes = 0;
    int i = 0;
    int num = -1;
    while(count_super_primes < x){
        if(arr[i]){
            count_primes++;
            if(arr[count_primes]){
                count_super_primes++;
                num = i;
            }
        }
        i++;
    }
    return num;
}
int main(){ 
    int k;
    cin >> k;
    cout << f(k,40000);

    return 0;
}