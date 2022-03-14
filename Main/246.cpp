#include <iostream>

using namespace std;

int main(){
    int n, count = 0,prev, now;
    cin >> n >> prev;
    for (int i = 0; i < n - 1; i++){
        cin >> now;
        if(prev + 1 != now){
            count ++;
        }
        prev = now;
    }

    cout << count;
}