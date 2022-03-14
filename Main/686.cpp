#include<iostream>
#include<iomanip>
#include<vector>
#include<set>
#include<queue>
#include<deque>
#include<map>
#include<algorithm>
using namespace std;

int main(){
    int n; 
    cin >> n;
    vector<int> arr (n);
    vector<int> front ;
    vector<int> back ;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr.begin(),arr.end());

    for(int i = 0; i < n ; i+=2){
        front.push_back(arr[i]);
        if(i + 1 != n){
            back.push_back(arr[i + 1]);
        }
    }
    reverse(back.begin(),back.end());
    for(int i = 0; i < front.size(); i++){
            cout << front[i] << " ";
    }
     for(int i = 0; i < back.size(); i++){
            cout << back[i] << " ";
    }

    return 0;
}