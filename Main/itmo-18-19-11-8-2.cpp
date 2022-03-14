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
    int n, k, in;
    cin >> n >> k;
    vector<pair<int,int>> arr(1001, pair<int,int> ({0,0}));
    for (int i = 0; i < n; i++){
        int a;
        cin >> a;
        arr[a].first++;//0 not used, 1 used
    }

    for(int i = 0; i < n; i++){
        if(arr[i].first > n / k + 1){
            cout << -1;
            return 0;
        }
    }
    
    for(int i = 0; i < n; i++){
        if(i % k == 0 && i != 0){
            for(int j = 1; j < 1001; j++){
                arr[j].second = 0;
            }
        }
        for(int j = 1; j < 1001; j++){
            if(arr[j].first > 0 && arr[j].second == 0){
                cout << j << " ";
                arr[j].first --;
                arr[j].second = 1;
                break;
            }
        }
    }

    return 0;
}