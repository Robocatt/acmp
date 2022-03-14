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

string solve(int nb, int ng){
    string s = "";
    while(nb >= 1 && ng >= 2){
        s += "BGG";
        nb -- ;
        ng -=2;
    }
    return string(ng,'G') + s + string(nb,'B');
}


int main(){
    
    int nb, ng;
    cin >> nb >> ng;
    cout << solve(nb,ng);

    return 0;
}