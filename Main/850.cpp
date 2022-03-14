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
    int a, b;
    cin >> a >> b;
    cout << max(a,b) / 2 + max(a,b) % 2 << " " << min(a,b);

    return 0;
}