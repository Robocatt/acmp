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
    map<pair<int,int>,int> mp;
    vector<pair<int,int>> arr;
    for(int i = 0; i < n; i++){
        int t, f;
        cin >> t >> f;
        arr.push_back({t,f});
        mp[{t,f}] = -1;
    }
    //vector<int> employeers(m,0);
    long long all_time = 0;
    long long trip_time;
    pair<int,int> pa ;
    long long times = 0;
    while(arr.size() > 0){
        pa = arr[0];
        arr.erase(arr.begin()); 
        trip_time = pa.second;
        mp[pa] = 2 * trip_time + all_time -  pa.first;
        int j = 0;
        for(; j < arr.size(); j++){
            if(arr[j].second < pa.second && arr[j].second - pa.second + trip_time <= arr[j].first){
                mp[arr[j]]= all_time + 2 * trip_time;
                arr.erase(arr.begin()+j);
                j = 0;
            }

        }
        all_time += 2 * trip_time; 


    
    }

    for(auto i = mp.begin(); i != mp.end(); i++){
        cout << i->second << endl;
    }

    return 0;
}