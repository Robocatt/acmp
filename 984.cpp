#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;
int main(){
    int p,n,k;
    cin >> p >> n >> k;
    vector<string> name(p);
    vector<pair<string,int>> nn(p);
    map<string,int> mp;
    string temp;
    getline(cin,temp);
    for(int i = 0; i < p; i++){
        string s;
        getline(cin,s);
        name[i] = s;
        mp.insert({s,0});
    }
    for(int i = 0; i < p; i++){
        int j;
        cin >> j;
        nn[i] = {name[i],j};
    }
    int count = 0,i = 0;
    while(count < n ){
        if(i + 1 > nn.size()){
            break;
        }
        if(mp[nn[i].first] < k){
            cout << nn[i].first << " #" << nn[i].second << endl; 
            mp[nn[i].first] ++;
            count ++;
        }
        i++;
        
    }



    return 0;
}