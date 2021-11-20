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

int sq_rank_c(int n){
    vector<int> arr;
    n*=n;
    while(n > 0){
        arr.push_back(n % 8);
        n/=8;
    }
    return arr.size();
}
int main(){
    int count = 0;
    for(int i = 64; i < 513; i++){
        if(sq_rank_c(i) == 6){
            count ++;
        }
    }
    cout << count;

    return 0;
}