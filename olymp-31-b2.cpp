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
    vector<bool> iscalled(m,false);
    long long all_time = 0;
    long long trip_time;
    long long cur_level = 1;
    pair<int,int> pa ;
    
    while(arr.size() > 0){
        trip_time = 0;
        if(cur_level == 1){
            pa = arr[0];
            arr.erase(arr.begin()); 
        }
        //cur_level = pa.second;
        trip_time += pa.second;
        cout << all_time + 2 * trip_time << endl;
        for(int j = 0; j < arr.size(); j++){
            if(arr[j].second < pa.second && arr[j].second - pa.second + trip_time <= arr[j].first){
                cout << all_time + trip_time + arr[j].second << endl;
                arr.erase(arr.begin()+j);
                j++;
            }//else if (arr[j].second - pa.second > trip_time + arr[j].first){
            //    break;
            //}

        }
        all_time += pa.second; 


    
    }



    return 0;
}