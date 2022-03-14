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

long long getsum(long long a, vector<long long> arr, long long k, long long n, long long maxx){
    long long b = max(0ll, a - k);
    long long e = min(a + k, n - 1); 
    long long summ = (e - b + 1) * maxx; 
    arr.erase(arr.begin() + max(0ll, a - k), arr.begin() + min( a + k + 1, n));
    for(int i = 0; i < arr.size(); i++){
        summ += arr[i];
    }
    return summ;
}

int main(){
    int n,k;
    cin >> n >> k;
    vector<long long> arr(n);
    vector<long long> maxp;
    long long maxx = -1; 
    long long maxi = -1;
    for(int i = 0; i < n; i++){
        long long a;
        cin >> a;
        arr[i] = a;
        if(a > maxx){
            maxx = a;
            maxp.clear();
            maxp.push_back(i);
        }else if(a == maxx){
            maxp.push_back(i);
        }
    }
    if(k > n){
        cout << maxx * n;
        return 0;
    }
    long long ans = -1;
    for(int i = 0; i < maxp.size(); i++){
        ans = max(getsum(maxp[i], arr, k, n, maxx), ans);
    }
    cout << ans;
    
    
   

    return 0;
}