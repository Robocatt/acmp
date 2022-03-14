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
    int n;
    cin >> n;
		vector<int> vec(n);
    vector<int> roses, violets;
    vector<int> roses_bad, violets_bad;
    //0 - роза, 1 - фиалка; 
    for(int i = 0; i < n; i++){
        cin >> vec[i];
        if(vec[i] == 1){
            violets.push_back(i);
            if(i % 2 == 0){
                violets_bad.push_back(i);
            }
        }else{
            roses.push_back(i);
            if(i % 2 == 1){
                roses_bad.push_back(i);
            }
        }
    }
    if (roses_bad.size() != violets_bad.size()){
			cout << -1;
			return 0;
		}
    for (int i = 0; i < roses_bad.size(); i++){
			cout << violets_bad[i] + 1 << " " << roses_bad[i] + 1 << endl;
		}

    
        
    return 0;
}