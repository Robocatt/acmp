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
    
    int i, j, m;
    cin >> m;
    vector<bool> a(m);
    for(i = 2; i < m; ++i){
        a[i] = true;
    }
    for(i = 2; i*i < m; ++i){
        if(a[i]){
            for(j = i + i; j < m; j += i){
                a[j]=false;
            }
        }
    }
    i = 2;
    while(!(a[i] && a[m-i])){
        i++;
    }
    cout << i << " " << m - i;
    return 0;
}