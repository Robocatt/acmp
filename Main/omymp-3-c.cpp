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
    long long n,start,end,k;
    cin >> n >> start >> end >> k;
    vector<long long> a(k + 1),b(k + 1),s(k + 1),e(k + 1);
    for(int i = 1; i <= k; i++){
        cin >> a[i] >> s[i] >> b[i] >> e[i];
    }
    vector<long long> res(n + 1,10000000);
    res[start] = 0;
    for(int i = 1; i < n + k; i++){
        for(int j = 1; j <= k; j++){
            if(res[a[j]] <= s[j]){
                if(e[j] < res[b[j]]){
                    res[b[j]] = e[j];
                }
            }
        }
    }
    cout << res[end];
    

    return 0;
}