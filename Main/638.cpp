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
    int n, k, w, dw, s,dm;
    cin >> n >> k >> w >> dw >> s;
    vector<bool> is_free_month(n + 1,true);
    vector<bool> is_free_week (w + 1,true);
    for(int i = 0; i < dw; i++){
        int dwcur;
        cin >> dwcur;
        is_free_week[dwcur] = false;
    }
    int wx = s;
    for(int i = 1; i <= n; i++){
        is_free_month[i] = is_free_week[wx];
        if(wx == w){
            wx = 1;
        }else{
            wx++;
        }
    }
    cin >> dm;
    for(int i = 0; i < dm; i++){
        int dmcur;
        cin >> dmcur;
        is_free_month[dmcur] = false;
    }

    int curh = 0, count = 0;
    for(int i = 1;  i <= k; i++){
        if(!is_free_month[i]){
            curh ++;
        }
    }
    if(curh == 0){
        count ++;
    }
    for(int i = k + 1; i <= n; i++){
        if(!is_free_month[i]){
            curh++;
        }
        if(!is_free_month[i-k]){
            curh--;
        }
        if(curh == 0){
            count ++;
        }
    }

    cout << count;
    return 0;
}