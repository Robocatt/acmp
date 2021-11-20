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
    int x = 37163,count = 0;
    while(x > 0){
        if (x % 2 == 1){
            cout << x << " " << "odd" << " " << count <<endl;
        }else{
            cout << x << " " << "even" <<" " << count<<endl;
        }    
            x /= 2;
            count ++;
    }
    cout << count;
    

    return 0;
}