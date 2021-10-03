#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(101,0);
    
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        arr[x] ++;
    }
    int maxx = arr[1],maxi = 1 ;
    for(int i = 0; i < arr.size(); i++){
        if (arr[i] >= maxx){
            maxx = arr[i];
            maxi = i;
        }
    }
    sort(arr.begin(),arr.end());
    cout << (arr[arr.size() - 1] == arr[arr.size() - 2] ? 0 : maxi); 


    return 0;
}