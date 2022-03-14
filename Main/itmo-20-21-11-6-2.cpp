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

int time_in_sec(string time){
    int h,m,s;
    h = stoi(time.substr(0,2));
    m = stoi(time.substr(3,2));
    s = stoi(time.substr(6,2));
    return h * 3600 + m * 60 + s;
}

int main(){
    int n, m;
    cin >> n >> m;
    map<string,int> start_time;// начальное время каждого 
    map<string,pair<int,int>> table;// имя,{№ контрольн. точки, время общ}
    for(int i = 0; i < m; i++){
        int nn;
        string name, time;
        cin >> nn >> name >> time;
        if(nn == 1){
            table[name] = {1,time_in_sec(time)};
            start_time[name] = time_in_sec(time);
        }else{
            table[name].first ++;
            table[name].second = time_in_sec(time);
        }
    }
    vector<string> ans;
    int minn = 90000;
    for(auto it = table.begin(); it != table.end(); it++){
        if((it->second).first == n && (it->second).second - start_time[it->first] < minn){
            //проверка на все контр. точки, и то что время - минимально
            minn = (it->second).second - start_time[it->first];
            ans.clear();
            ans.push_back({it->first});
        }else if ((it->second).first == n && (it->second).second - start_time[it->first] <= minn){
            //время равно минимальному
            ans.push_back({it->first});
        }
    }
    if(ans.size() == 0){
        cout << 0;
        return 0;
    }
    cout << ans.size() << endl;
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << endl;
    }

    return 0;
}