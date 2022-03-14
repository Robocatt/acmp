#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
using namespace std;
 
multimap<int, int> invert(map<int, int> & mp){
	multimap<int, int> multiMap;

	map<int, int> :: iterator it;
	for (it=mp.begin(); it!=mp.end(); it++) {
		multiMap.insert(make_pair(it->second, it->first));
	}

	return multiMap;
}
 
int main(){
    int n;
    cin >> n; 
    map<int,int> mp;
    vector<int> base;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        base.push_back(x);
        if (mp.find(x) == mp.end()){
            mp[x] = 1;
        }else{
            mp[x]++;
        }
    }
    
    multimap<int, int> newmap = invert(mp);

    int maxtimes = newmap.end()->second; 
    int minmax = newmap.end()->first;

    for (multimap<int,int>::iterator it = newmap.end(); it != newmap.begin(); --it) {
        if ( ( (it -> first) == ((it -- ) -> first) ) && ((it -> second) > ((it --) -> second) ) ){
            minmax = (it--)->second;
        }
        //cout << it->first << "\t" << it->second << endl ;
    }
    //while(count(base.begin(),base.end(),arr[last].first) > 0){
    //    base.erase(find(base.begin(),base.end(),arr[last].first));
    //}
    for(int i = 0; i < base.size(); i++){
        cout << base[i] << " ";
    }
    //for(int i = 0; i < arr[arr.size()-1].second; i++){
    //    cout << newmap[].second << " ";
    //}
 
    return 0;
}