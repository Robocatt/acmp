#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int main(){
    string a, b;
    cin >> a >> b;
    ull a1 = 0, b1 = 0;
    ll count = a.size() - 1;
    for(int i = 0; i < a.size(); i++){
        a1 += ( (a[i] - 48) * pow(3,count));
        count --;
    }
    count = b.size() - 1;
    for(int i = 0; i < b.size(); i++){
        b1 += ( (b[i] - 48) * pow(3,count));
        count --;
    }
    cout << a1 + b1;

    return 0;
}