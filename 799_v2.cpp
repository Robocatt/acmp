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
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int maxx = -1;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        int inn;
        cin >> inn;
        arr[i] = inn;
        maxx = max(inn,maxx);
    }
    int w = 0;
    int maxres = 0;
    for(int i = 0; i + 1 < n; i++){
        if(w >= 1 && arr[i] % 10 == 5 && arr[i + 1] < arr[i]){
            maxres = max(maxres,arr[i]);
        }
        if(arr[i] == maxx){
            w ++;
        }
    }
    if(maxres == 0){
        cout << "0";
        return 0;
    }else{
        int count = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] > maxres){
                count++;
            }
        }
        cout << count + 1;
    }
    

    return 0;
}