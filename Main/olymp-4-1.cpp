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
    long long a, b, c;
    cin >> a >> b >> c;
    cout << max(max(a,b),c) + min(min(a,b),c);
    

    return 0;
}