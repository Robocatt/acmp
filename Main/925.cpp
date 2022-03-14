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
    int k, n, a, b, c;
    cin >> k >> n >> a >> b >> c;
    if( k == 1){
        cout << n - min((n - a) + (n - b) + (n - c), n);        
    }else{
        cout << min(min(a, b), c);
    }
    

    return 0;
}