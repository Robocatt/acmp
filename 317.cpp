
#include <iostream>
#include<vector>


using namespace std;
int main(){
    int x,y,z,w,count = 0;
    cin >> x >> y >> z >> w;
    for(int i = 0; x * i <= w ; i++){
        for(int j = 0; y * j <= w ; j++){
            if ((w - i * x - j * y) >= 0 &&  (w - i * x - j * y) % z == 0){
                count ++;
            }
        }
    }
    cout << count;

    return 0;
}