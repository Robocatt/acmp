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


int main(){
    int n;
    vector<int> arr(101);
    int maxx = 0, max_c;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        arr[a]++;
        if(arr[a] > maxx){
            maxx = arr[a];
            max_c = a;
        }
    }
    vector<int> ans(n);
    if(n % 2 == 0){
        
    }


    return 0;
}