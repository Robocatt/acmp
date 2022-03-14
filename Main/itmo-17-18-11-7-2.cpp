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
    vector<int> arr (n);
    vector<int> arrmin (n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    arrmin = arr;
    sort(arrmin.begin(),arrmin.end());
    int minn = arrmin[0]; 
    for (int i = 1; i < arr.size(); i++){
        int times = -1;
        bool f = false;
        int curmin = INT16_MAX;
        for(int j = 0; j < arr.size(); j++){
            if(f){
                if(arr[j] < curmin ){
                    curmin = arr[j];
                    times = i;
                }else{
                    times --;
                    if(times == 0){
                        break;
                    }
                }
            }
            if(arr[j] < curmin){
                curmin = arr[j];
                times = i;
                f = true;
            }
        }
        if(curmin == minn){
            cout << i;
            return 0;
        }
    }

    return 0;
}