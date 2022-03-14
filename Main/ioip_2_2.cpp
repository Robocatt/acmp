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
typedef unsigned long long ul;
typedef long long ll;
using namespace std;
string removezero(string a){
    int i = 0;
    while(a[i] == '0' && a.size() > 0){
        a.erase(a.begin());   
    }
    if(a.size()==0){
        a = "0";
    }
    return a;
}
string comp(string a, string b){
    a = removezero(a);
    b = removezero(b);
    
    if(a.size()> b.size()){
        return a;
    }
    if(b.size()> a.size()){
        return b;
    }
    for(int i = 0; i < a.size(); i++){
        if(a[i] > b[i]){
            return a;
        }else if(b[i] > a[i]){
            return b;
        }
    }
    return a;
}



int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    string s;
    int n;
    cin >> n;
    vector<int> sum(n,0);
    //vector<int> count_n(10,0);

    if(n == 1){
        cin >> n;
        cout << (n % 3 == 0 ? n : 0);
        return 0;
    }
    long long summ = 0;
    for(int i = 0; i < n; i++){
        char c;
        cin >> c;
        s+=c;
        sum[i] = sum[i - 1] + c - '0';
        summ += c - '0';
        //count_n[c-'0']++;
    }
    int ost = summ % 3;
    if(summ == 0){
        cout << 0;
        return 0;
    }
    if(ost == 0){
        cout << s;
        return 0;
    }
    long long maxx = 0;
    string ans="";
    for(int i = 0; i < n; i++){
        string h = s;
        h.erase(h.begin() + i);
        ll cur_sum = summ - s[i] + '0';
        if(cur_sum % 3 == 0){
            maxx = cur_sum;
            ans = comp(ans,h);
        }
        for(int j = 0; j < h.size(); j++){
            if((cur_sum - h[j] + '0') % 3 == 0){
                h.erase(h.begin() + j);
                if(h.size()==0){
                    continue;
                }
                maxx = cur_sum;
                ans = comp(ans,h);
            }
        }
        
    }
    int i = 0;
    while(ans[i] == '0' && ans.size() > 0){
        ans.erase(ans.begin());   
    }
    if(ans.size() == 0){
        cout << 0;
    }else {
        cout << ans;
    }


    return 0;
}