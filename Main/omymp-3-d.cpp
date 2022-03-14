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
    long long n, a, b,minn_global = INT32_MAX;
    cin >> n >> a >> b;
    vector<double> need(n);
    vector<pair<int,int>> students(n);
    for(int i = 0; i < n; i++){
        long long a, b;
        cin >> need[i];
        cin >> a >> b;
        minn_global = min(minn_global, b);
        students.push_back({a,b});
    }
    double price = 0, time_global;
    long long minn_global_comp = min(a * n * minn_global, b * n);
    price += minn_global_comp;
    for(int i = 0; i < n; i++){
        need[i] -= students;
    }


    return 0;
}