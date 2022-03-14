#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> arr {2,4,8,6,3,5,0};
    int k = 37, z = 0,n = 7,i = 1;
        while(i + 1 < n){
            int y = arr[i - 1] + k % 10 + z;
            if(y < 9){
                arr[i - 1] = y;
                i++;
                z = 0;
            }else{
                arr[i - 1] = y % 9;
                z = y / 9;
                i++;
            }
            y = arr[i - 1] + k / 10 + z;
            if(y < 9){
                arr[i - 1] = y;
                i++;
                z = 0;
            }else{
                arr[i - 1] = y % 9;
                z = y / 9;
                i++;
            }
        }
        arr[i - 1] = z;
        for(int i = 0; i < 7;i++){
            cout << arr[i] << " ";
        }
        



    return 0;
}