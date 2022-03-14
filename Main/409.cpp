#define _USE_MATH_DEFINES
#include<iostream>
#include<fstream>
#include<vector>
#include<queue>
#include<deque>
#include<set>
#include<map>
#include<string>
#include<utility>
#include<cmath>
#include<algorithm>
#include<iomanip>
typedef unsigned long long ul;
typedef long long ll;
using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    double s = 0;
    for(int i = 1; i < n; i++){
        s += (arr[i - 1] + arr[i]) / 2.0;
    }
    cout << fixed << setprecision(6) << s / (n - 1);


    return 0;
}