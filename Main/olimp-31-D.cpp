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
    cout << ((a - 1) / 4 == (b - 1) / 4 ? "YES" : "NO") << endl;
    cout << (a % 2 == 1 ? "LOW" : "HIGH") << endl;
    cout << (b % 2 == 1 ? "LOW" : "HIGH") << endl;
    

    return 0;
}