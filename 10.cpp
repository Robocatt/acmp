#include<iostream>
#include<vector>
#include<set>
using namespace std;

int main(){
    vector<long long> arr(4);
    set<long long> se;
    for(int i = 0; i < 4; i++){
        cin >> arr[i];
    }
    for(int i = -100; i < 101; i++){
        if(arr[0] * i * i * i + arr[1] * i * i + arr[2] * i + arr[3] == 0){
            se.insert(i);
        }
    }
    for (set<long long>::iterator it = se.begin(); it != se.end(); ++it){
        cout << (*it) << " ";
    }



    return 0;
}