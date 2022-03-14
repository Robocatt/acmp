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
    int n,m;
    cin >> n >> m;
    vector<int> arr(m);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            char a;
            cin >> a;
            if(a == '*'){
                arr[j] = i;
            }
        }
    }
    int count = 0;
    for(int i = 1; i < m ; i++){
        if(arr[i - 1] < arr[i] && arr[i] > arr[i + 1]){
            count ++;
        }
    }
    cout << count;
    


    return 0;
}