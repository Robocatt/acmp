#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> arr(n,0);
    
    for(int i = 0; i < 2 * m; i++){
        int x;
        cin >> x;
        arr[x - 1] ++;
    }
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }



    return 0;
}