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
    cin >> n;
    vector<int> pos,neg;
    long long sum_pos = 0, sum_neg = 0;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        if(a >= 0){
            sum_pos += a;
            pos.push_back(i + 1);
        }else{
            sum_neg += a;
            neg.push_back(i + 1);
        }
    }
    if(abs(sum_neg) > sum_pos){
        cout << neg.size() << endl;
        for(int i = 0; i < neg.size(); i++){
            cout << neg[i] << " ";
        }
    }else{
        cout << pos.size() << endl;
        for(int i = 0; i < pos.size(); i++){
            cout << pos[i] << " ";
        }
    }



    return 0;
}