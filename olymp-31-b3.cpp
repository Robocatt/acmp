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
    int n, m;
    cin >> n >> m;
    vector<pair<int,int>> arr;
    for(int i = 0; i < n; i++){
        int t, f;
        cin >> t >> f;
        arr.push_back({t,f});
    }
    vector<int> employeers(m,0);
    long long all_time = 0;
    long long trip_time;
    long long cur_level = 1;
    pair<int,int> pa ;
    long long times = 0;
    while(arr.size() > 0){
        times ++;
        trip_time = 0;
        if(cur_level == 1){
            pa = arr[0];
            arr.erase(arr.begin()); 
        }
        trip_time += pa.second;
        employeers[0] = 2 * trip_time;
        for(int j = 0; j < arr.size(); j++){
            if(arr[j].second < pa.second && arr[j].second - pa.second + trip_time <= arr[j].first){
                employeers[times + j] = all_time + 2 * trip_time;
                arr.erase(arr.begin()+j);
                j++;
            }

        }
        all_time += 2 * trip_time; 


    
    }

    for(int i = 0; i < employeers.size(); i++){
        cout << arr[i] << endl;
    }

    return 0;
}