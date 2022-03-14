#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;



bool check(vector<int> & arr,int m){
    int count = 0;
    for(int i = 0; i < arr.size(); i++){
        if(count + arr.size() - i < m){
            break;
        }
        if(count > m){
            break;
        }
        if(arr[i] == i + 1){
            count ++;
        }
    }
    return (count == m ? true : false);
}



int main(){
    int n, m, c = 0;
    cin >> n >> m;
    vector<int> arr;
    for(int i = 0; i < n  ; i++){
        arr.push_back(i + 1);
    }
    do {
        if(check(arr,m)){
            c++;
        }

    }while(next_permutation(arr.begin(),arr.end()));
    cout << c;
    return 0;
}