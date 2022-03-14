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
    int mem = 360;
    int count_1 = 0, count_2 = 0;
    vector<int> arr1;
    vector<int> arr2;
    vector<bool> (360,0); // 0 - свободно,
    for(int i = 0; i < 5100 && mem >= 0; i++){
        if(i % 11 == 0){
            count_1++;
            mem -= 80;
            arr1.push_back(i);
        }
        if(i % 6 == 0){
            count_2++;
            mem -= 40;
            arr2.push_back(i);
        }
        if(arr1.front() + 30 == i){
            arr1.erase(arr1.begin());
            mem += 80;
        }
        if(arr2.front() + 15 == i){
            arr2.erase(arr2.begin());
            mem += 40;
        }
        //cout << i << " " << mem << endl;
    }
    cout << count_1 << " " << count_2;

    return 0;
}