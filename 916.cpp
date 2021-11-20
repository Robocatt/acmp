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
    int n, k;
    cin >> n >> k;
    vector<unsigned long long> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr.begin(),arr.end());
    reverse(arr.begin(),arr.end());
    unsigned long long count_bottle = 0,count_money = 0, count = 0;
    while(count_bottle < n){
        for(int i = 0; i <k ; i++){
            count_money += (count + 1) * arr[count_bottle++];
            if(count_bottle == n){
                break;
            }
        }
        count ++;
    }
    cout << count_money;
    return 0;
}