#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> arr (n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int a, b, k, max_pos = 0;
    cin >> a >> b >> k;

    int s = (a - 1) / k;
    int c = min(n, (b - 1 ) / k + 1 - a);
    
    for (int rot = -1; rot < 2; rot +=2){
        int cur = a * rot;
        cur %= n;
        cur += n;
        cur %= n;
        for(int j = 0; j < c ; j++){
            if(arr[cur] > max_pos){
                max_pos = arr[cur];
            }
            cur += rot;
            cur %= n;
            cur += n;
            cur %= n;
        }
    }
    cout << max_pos;




    return 0;
}