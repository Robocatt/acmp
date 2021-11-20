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

int main(){
    cin.tie(0);
    cout.tie(0);
    int n;
    double f1,l = 30, r = 4000;
    cin >> n >> f1;
    for(int i = 0; i < n - 1; i++){
        double fi;
        string s; 
        cin >> fi >> s;
        if(fi == f1){
            continue;
        }
        double mid = (fi + f1) / 2;
        if((fi > f1 && s == "closer") || (fi < f1 && s == "further")){
            l = max(l,mid);
        }else{
            r = min(r,mid);
        }
        f1 = fi;
    }
    cout << l << " " << r;

    return 0;
}