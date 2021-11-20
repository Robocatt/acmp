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
    long long a,b;
    cin >> a >> b;
    if(a == b){
        cout << -1;
    }else if (a == 1){
        cout << 1;
    }else if(b - a == 1){
        cout << a * (a - 1);
    }else{
        cout << 2 * a;
    }

    return 0;
}