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
    int k;
    cin >> k;
    for(int i = 0; i < k; i++){
        long long n, m;
        cin >> n >> m;
        cout << ((n > 1 && m <= (n - 1) * (n - 2) / 2) ? "Yes" : "No") << endl;
    } 
    

    return 0;
}