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
    vector<int> arr(20);
    long long count = 0, count_good = 0;
    for (int i = 0; i < 10; i++){
       for (int j = 0; j < 10; j++){
           for (int k = 0; k < 10; k++){
               for (int l = 0; l < 10; l++){
                   count++;
                   if(i + j == k + l){
                       arr[i + j]++;
                       //cout << i << " " << j << " " << k << " " << l << endl;
                       count_good++;
                   }
                }
            }
        } 
    }
    for(int i = 0; i < 20; i++){
        cout << i << " " << arr[i] << endl;
    }
    cout << count << " " << count_good << endl;
    return 0;
}