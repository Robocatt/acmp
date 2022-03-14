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
    char c;
    int summ = 0;
    vector<int> arrg, arrb;
    for (int i = 0; i < n; i++){
        cin >> c >> n;
        summ += n;
        if(c =='+'){
            arrg.push_back(n);
        }else{
            arrb.push_back(n);
        }
    }
    double g_l, g_u, b_l, b_u;
    for(int i = 0; i < arrg.size(); i++){
        
    }



    return 0;
}