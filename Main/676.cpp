#define _USE_MATH_DEFINES
#include<iostream>
#include<fstream>
#include<vector>
#include<queue>
#include<deque>
#include<set>
#include<map>
#include<string>
#include<utility>
#include<cmath>
#include<algorithm>
typedef unsigned long long ul;
typedef long long ll;
using namespace std;

vector<int> arr(11000,0);

int r(int num){
    if(arr[num] != 0){
        return arr[num];
    }
    if(r(num - 1) == 1 && r(num - 2) == 1){
        if(num > 1000 && r(num - 1000) == 1){
            arr[num] = 2;
        }else{
            arr[num] = 2;
        }
    }else{
        arr[num] = 1;
    }
    return arr[num];
}




int main(){
    arr[1] = 1;
    arr[2] = 1;
    arr[3] = 2;
    int n;
    cin >> n;
    cout << r(n);




    return 0;
}