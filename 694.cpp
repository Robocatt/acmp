#include <iostream>
#include <vector>
using namespace std;




int main(){ 
    int n, a, b;
    cin >> n;
    vector<int> arr(31);
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        for(int j = a; j <= b; j++){
            arr[j - 1] +=1;
        }
    }
    for(int i = 0; i < 31; i++){
        if(arr[i] == n){
            cout << "YES" ;
            return 0;
        }
    }
    cout << "NO";
    return 0; 
} 