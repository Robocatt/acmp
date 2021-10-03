#include<iostream>
#include<iomanip>
#include<vector>
#include<set>
#include<queue>
#include<deque>
#include<map>
#include<algorithm>
#include<cmath>
using namespace std;

int count(int n){
    int count = 0;
    while (n > 0) {
        count += n % 10;
        n /= 10;
    }
    return count;

}
bool prime(int n){
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}



int main(){
    int a, b, maxx = -1, max_num = -1;
    cin >> a >> b;
    for(int i = a; i <= b; i++){
        if(prime(i)){
            int x = count(i);
            if(x >= maxx){
                maxx = x;
                max_num = i;
            }
        }
    }
    if(max_num == 1){
        cout << -1;
    }else{
        cout << max_num;
    }

    return 0;
}