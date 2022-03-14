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

int sum_x(int n,int sys){
    int count = 0;
    while(n > 0){
        count += n % sys;
        n /= sys;
    }
    return count;
}

int main(){
    vector<int> diff(50,0);
    for(int i = 2; i < 4096; i++){
        int d = sum_x(i,16) - sum_x(i,4);
        //cout << d << endl;
        diff[d]+=1;
    }
    for(int i = 0; i < 50; i++){
        cout << i << " " << diff[i] << endl;
    }


    

    return 0;
}