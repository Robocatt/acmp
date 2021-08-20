#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr;
    while(n !=  0){
        arr.push_back(n % 2);
        n /= 2;
    }
    int count = 0;
    for(int i = 0; i < arr.size(); i++){
        if (arr[i] == 1){
            count ++;
        }
    }
    cout << count;

    return 0;
}