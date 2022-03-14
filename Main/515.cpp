#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    if (n == 1){
        int x,y;
        cin >> x >> y;
        cout << fixed << setprecision(3);
        cout << 2 * sqrt(pow(x,2) +  pow(y,2));
        return 0;
    }
    double dist;
    pair<int,int> cur = {0,0};
    for(int i = 0; i < n ; i++){
        int x,y;
        cin >> x >> y;
        dist +=  sqrt(pow(x - cur.first,2) +  pow(y - cur.second,2));
        cur = {x,y};
    }
    dist += sqrt(pow(cur.first,2) +  pow(cur.second,2));
    cout << fixed << setprecision(3);
    cout << dist;
    return 0;
}