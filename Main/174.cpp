#include<iomanip>
#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;
int main(){
    int n,k;
    double x;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cin >> k;
    x = k;
    sort(arr.begin(),arr.end());
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] > k){
            x = (x + arr[i]) / 2;
        }
    }

    cout << fixed << setprecision(6) << x; 

}