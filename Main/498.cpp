#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;



bool check(vector<int> & arr,int m){
    bool f = true;
    for(int i = 0; i < arr.size() - 1; i++){
        if( abs (arr[i] - arr[i + 1] ) > m){
            f = false;
            break;
        }
    }
    return f;
}



int main(){
    int n, k, c = 0;
    cin >> n >> k;
    vector<int> arr;
    for(int i = 0; i < n  ; i++){
        arr.push_back(i + 1);
    }
    do {
        if(check(arr,k)){
            c++;
        }

    }while(next_permutation(arr.begin(),arr.end()));
    cout << c;
    return 0;
}