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
    
    long long n;
    cin >> n;
    if (n == 0 || n == 1){
        cout << 0;
    }else if (n == 2 || n == 3){
        cout << n - 1;
    }else{
        cout << n;
    }

    return 0;
}