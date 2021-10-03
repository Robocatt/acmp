#include<iostream>
#include<iomanip>
#include<vector>
#include<set>
#include<queue>
#include<deque>
#include<map>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    double cur_x = 0, cur_y = 0;
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        if(a == 1){
            cur_y += b;
        }else if(a == 2){
            cur_x += b / sqrt(2);
            cur_y += b / sqrt(2);
        }else if(a == 3){
            cur_x += b;
        }else if(a == 4){
            cur_x += b / sqrt(2);
            cur_y -= b / sqrt(2);
        }else if(a == 5){
            cur_y -= b;
        }else if(a == 6){
            cur_x -= b / sqrt(2);
            cur_y -= b / sqrt(2);
        }else if(a == 7){
            cur_x -= b;
        }else if(a == 8){
            cur_x -= b / sqrt(2);
            cur_y += b / sqrt(2);
        }
    }
    cout << fixed << setprecision(10);
    cout << cur_x << " " << cur_y;

    return 0;
}