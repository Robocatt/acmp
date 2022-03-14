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
    int n, m1,m2;
    cin >> n >> m1 >> m2;
    vector<pair<int,int>> arr(n);
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        arr[i] = {a,b};
    }

    long long count = 0;
    for(int i = 0; i < n; i++){
        int ins_b = arr[i].first, ins_e = arr[i].second;
        for(int j = i; j < n; j++){
            if(arr[j].second < ins_b || arr[j].first > ins_e){
                if(m1 == 0 || m2 == 0){
                    count += n - j ; 
                }
                break;
            }
            ins_b = max(ins_b,arr[j].first);
            ins_e = min(ins_e,arr[j].second);
            if(ins_e - ins_b <= m2 && ins_e - ins_b >= m1){
                count++;
            }
        }
    }
    cout << count;
    return 0;
}