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
    vector<int> roses, violets;
    vector<int> roses_bad, violets_bad;
    //0 - роза, 1 - фиалка; 
    for(int i = 1; i <= n; i++){
        int a;
        cin >> a;
        if(a == 1){
            violets.push_back(i);
            if(i % 2 == 1){
                violets_bad.push_back(i);
            }
        }else{
            roses.push_back(i);
            if(i % 2 == 0){
                roses_bad.push_back(i);
            }
        }
    }
    if(n % 2 == 0){
        if(roses.size() != violets.size()){
            cout << -1;
            return 0;
        }
    }else{
        if(roses.size() != (n / 2) + 1 || violets.size() != (n / 2)){
            cout << -1;
            return 0;  
        }
    }
    int count = 0;
    vector<int> ans;
    if(violets_bad.size() == 0){
        cout << 0;
        return 0;
    }
    cout << violets_bad.size() << endl;
    for (int i = 0; i < violets_bad.size(); i++){
        cout << violets_bad[i] << " " << roses_bad[i] << endl;
    }
        
    return 0;
}