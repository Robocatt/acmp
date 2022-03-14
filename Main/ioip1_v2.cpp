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
    long long n, k;
    cin >> n >> k;
    
    vector<long long> arr;
    vector<long long> maxi;
    long long maxx = -1;
    for(int i = 0; i < n; i++){
        long long a;
        cin >> a;
        if(a > maxx){
            maxx = a;
            maxi.clear();
            maxi.push_back(i);
        }else if(a == maxx){
            maxi.push_back(i);
        }
        arr.push_back(a);
    }
    if(k - 1 >= n ){
        cout << maxx * n;
        return 0;
    }
    if(k == 0){
        int s = 0;
        for(int i = 0; i < arr.size(); i++){
            s+=arr[i];
        }
        cout << s;
        return 0;
    }
    long long summ = -1;
    for(int i = 0; i < maxi.size(); i++){
        vector<long long> arrcur = arr;
        long long beg = maxi[i] - k;
        long long end = maxi[i] + k;
        beg = max(0ll,beg);
        end = min(n - 1, end);
        long long summ_cur = (1 + end - beg) * maxx;
        arrcur.erase(arrcur.begin() + beg, arrcur.begin() + end + 1);
        for(int j = 0; j < arrcur.size(); j++){
            summ_cur += arrcur[j];
        }
        summ = max(summ,summ_cur);
    }
    cout << summ;

    return 0;
}