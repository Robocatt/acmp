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

map<int,char> mp = {{10,'A'} , {11,'B'}, {12,'C'}, {13,'D'}, {14,'E'}, {15, 'F'}};

vector<int> to16arr(int a){
    vector<int> arr;
    while(a > 0){
        int x = a % 16;
        arr.push_back(x);
        a /= 16;
    }
    reverse(arr.begin(), arr.end());
    return arr;
}


int main(){
    for(int i = 1; i < 100000; i++){
        vector<int> num_in_16_arr = to16arr(i);
        int count_mp = 1;
        for(int j = 0; j < num_in_16_arr.size(); j++){
            count_mp *= num_in_16_arr[j];  
        }
        int cur_num = count_mp * i;
        if(cur_num == 9471){
            cout << i << endl;
        }
    }

    return 0;
}