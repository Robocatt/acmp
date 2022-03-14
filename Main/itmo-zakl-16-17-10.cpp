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


int main(){

    int n;
    char tmp;
    cin >> n >> tmp;
    map<string,int> mp;
    vector<string> arr;
    set<string> se;
    for(int i = 0; i < n; i++){
        string s;
        getline(cin, s);
        arr.push_back(s);
        if(s.find('?') == string::npos){
            int x = se.size();
            se.insert(s);
            if(x == se.size()){//проверка на повторение не залитых
                cout <<"NO";
                return 0;
            }
        }
        mp[s]++;
    }
    for(map<string,int>::iterator it = mp.begin(); it!= mp.end(); it ++){
        string cur = it->first;
        if(cur.find('?',cur.find('?') + 1) != string::npos ){
            if(it->second > 99){
                cout <<"NO";//более 99 с 2 ?
                return 0;
            }
        }else if(it->second > 9){
            cout <<"NO";// более 9 с 1 ?
            return 0;
        }
    }

    cout << "YES" << endl;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i].find('?') == string::npos){
            cout << arr[i] << endl;//без ?
        }else if(arr[i].find('?',arr[i].find('?') + 1) != string::npos ){
            if(mp[arr[i]] < 10){
                cout << arr[i].substr(0,4) << 0 << mp[arr[i]] << arr[i].back() << endl; // 2 ?, число < 10
            }else{
                cout << arr[i].substr(0,4) << mp[arr[i]] << arr[i].back() << endl;// 2 ? число больше 10
            }
            mp[arr[i]]--;
        }else{
            int pos = arr[i].find('?');
            cout << arr[i].substr(0,pos) << mp[arr[i]] << arr[i].substr(pos + 1) << endl;// 1?
            mp[arr[i]]--;
        }

    }



    return 0;
}