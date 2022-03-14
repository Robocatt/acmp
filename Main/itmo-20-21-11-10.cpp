#include<iostream>
#include<iomanip>
#include<vector>
#include<set>
#include<queue>
#include<deque>
#include<map>
#include<algorithm>
#include<cmath>
#include<string>
using namespace std;

int main(){
    int count = 0;
    for(int i = 1000; i <= 1500; i++){
        int n = i, r = i;
        while(r >= 100){
            r = 0;
            while(n > 0){
                r += n % 100;
                n /= 100;
            }
            n = r;
        }
        if(r % 11 == 0){
            count ++;
        }
    }
    cout << count;

    return 0;
}