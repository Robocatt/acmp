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
    deque<int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int last = -1;
    while (arr.size() >= 2){
        if(arr.front() <= arr.back()){
            arr.pop_front();
            last = arr.back();
            arr.pop_back();
        }else{
            cout << "NO";
            return 0;
        }
    }
    if(arr.size() == 1 && last > arr[0]){
        cout << "NO";
        return 0;
    }
    cout << "YES";

    return 0;
}