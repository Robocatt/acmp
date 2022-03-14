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
    int n, pos = 0, cur = 0, count = 0;
    cin >> n;
    vector <string> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end()); 
    while (cur < n){ 
        while (cur < n && arr[cur].substr(0, arr[pos].size()) == arr[pos]){
            cur++;
        }
        pos = cur;
        count++;
    }
    cout << count << endl;
       
    

    return 0;
}