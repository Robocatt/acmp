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
    for(int i = 1; i < 1000; i++){
        int n = i;
        int s = 2;
        int r = 0;
        while(n > 0){
            int k = 0;
            while(pow(s,k) <= n){
                k++;
            }
            r += pow(10,k-1);
            n-=pow(s,k-1);
        }
        cout << r << endl;
        if(r == 10110111){
            cout << i;
            break;
        }
    }
    
    

    return 0;
}