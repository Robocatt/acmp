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
int sum(int a){
    int s = 0;
       while (a > 0){
            s += a % 10;
            a = a / 10;
       }
    return s;
}
int main(){
    int n;
    cin >> n;
    int x = 1, del = 1;
    for (int i = 2; i <= n; i++) {    
            if (n % i == 0){ 
                if (sum(i) > x) {
                    x = sum(i);
                    del = i;
                }
            }
    }
    cout << del;
    

    return 0;
}