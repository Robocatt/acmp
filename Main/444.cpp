#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <set>
using namespace std;
 
int main(){
    int n;
    cin >> n; 
    vector<int> arr;   
    set<int> se;   
    for(int i = 0; i < n; i++){
        int h;
        int y = se.size();
        cin >> h;
        se.insert(h);
        if(y != se.size()){
            arr.push_back(h);
        }
    }
    int posl = 1;
    vector<pair<int,int>> arrp;
    sort(arr.begin(),arr.end());
    int num = arr[0];
    for(int i = 0; i < arr.size() - 1; i++){
        if(arr[i] + 1 == arr[i + 1]){
            posl ++;
            num = arr[i + 1];
        }else if (posl > 2){
            arrp.push_back({posl,num-posl + 1});
            posl = 1;            
        }
    }
    if (arrp.size() == 0 && posl > 2){
        arrp.push_back({posl,num-posl + 1});
    } 
    if(arrp.size() > 0 && arrp[arrp.size()-1].second != num - posl + 1 && posl > 2){
        arrp.push_back({posl,num-posl + 1});
    }
    int p = 0;
    bool f = true;
    //first - длинна 
    //second - начальное 
    for(int i = 0; i < arrp.size(); i++){
        if(arrp[i].first == 3){
            int si = to_string(arrp[i].second + 1).size();
            if(si < 3){
                arrp.erase(arrp.begin()+i);
            }
        }
    }
    vector<pair<int,int>> v = arrp;
    string s="";
    for(int i = 0; i < arr.size(); i++){
        if(f){
            s+= to_string(arr[i]) + ", ";
        }
        if (v.size() != 0){
            if(arr[i] == v[p].second){
                f = false;
            }
            if(arr[i] == v[p].second + v[p].first - 1){
                s+= "..., " +  to_string(arr[i])+ ", ";
                f = true;
                p ++;
            }
        }
    }
    s.erase(s.size()-2);
    cout << s;

    return 0;
}