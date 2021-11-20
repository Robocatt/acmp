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
    long long n,d,t;
    cin >> n >> d;
    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    long long x = arr[0] / d + 1,y = 0;
    int i = 0;
    while(i + 1 <= x && i < n){
        y = arr[i] / d + i + 1;
        i++;
        if(y > x){
            x = y;
        }
    }
    cout << min(x,n);

    return 0;
}