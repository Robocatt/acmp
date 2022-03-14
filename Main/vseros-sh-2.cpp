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
    long long x, y, n;
    cin >> x >> y >> n;
    if(n % (x + y) == 0){
        cout << (n / (x + y)) * 2;
    }else if (n % (x + y) <= y){
        cout << (n / (x + y)) * 2 + 1;
    }else{
        cout << (n / (x + y)) * 2 + 2;
    }
    return 0;
}