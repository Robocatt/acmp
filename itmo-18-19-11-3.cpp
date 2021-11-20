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
vector<int> mp(int n){
    vector<int> arre;
    while(n > 0){
        arre.push_back(n % 16);
        n/=16;
    }
    return arre;
}

int main(){
    for(long long i = 65536; i < 1048576; i++){
        vector<int> arrs;
        long long n = i;
        while(n > 0){
            arrs.push_back(n % 16);
            n /= 16;
        }
        reverse(arrs.begin(),arrs.end());
        if(mp(7*i) == arrs){
            cout << i;
            break; 
        }
    }
    

    return 0;
}