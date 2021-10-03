#include <iostream>
#include <vector>
using namespace std;




int main(){
    long long n;
    cin >> n; 
    vector<long long> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 1; i < n; i++){
        for(int j = 1; j < arr.size() - 1; j++){
            if(arr[j - 1] > arr[j] && arr[j + 1] > arr[j]){
                arr.erase(arr.begin() + j );
            }
        }
    }
    cout << arr.size() << endl;
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }

    return 0;
}