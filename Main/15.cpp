#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,count = 0;
    cin >> n;
    vector<vector<int>> arr(n,vector<int> (n,0));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            if (arr[i][j]){
                count ++;
            }
        }
    }
    cout << count;
    return 0;
}