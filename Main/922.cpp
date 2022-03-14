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
#include<iomanip>
typedef unsigned long long ul;
typedef long long ll;
using namespace std;


int main(){
    
    int t1,t2,s1,s2,dist;
    cin >> t1 >> t2 >> s1 >> s2 >> dist;
    
    if(s2 >= s1 && dist > s1){
        cout << "NO";
        return 0;
    }
    int time = 0;
    while(true){
        if(s1 >= dist){
            cout << fixed << setprecision(2) << (dist / (double(s1) / t1)) + time; 
        return 0;
        }
        dist -= (s1 - s2);
        time += t1 + t2;
    }



    return 0;
}