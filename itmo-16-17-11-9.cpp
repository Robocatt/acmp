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
int time_to_add(int n){
    int time = 0, cur_t = 1;
    for(int i = 0; i < n / 15; i++ ){
        time += cur_t * 15;
        cur_t++;
    }
    time += (n - ((n / 15) * 15)) * cur_t;
    return time;
}
int main(){
    int time_global = INT16_MAX, n_global = 0;
    for(int n = 15; n <= 500; n++){
        int lines = 0,time = -20;
        bool f = false;
        int add = time_to_add(n);
        while(lines < 500){
            time = time + 20 + add;
            lines += n;
            if(500 - lines < n){
                f = true;
                break;
            }
        }
        if(f){
            time += 20;
            int cur_t = 0, lines_added = 0;
            while(lines != 500){
                cur_t = (lines_added / 15) + 1;
                lines ++;
                time += cur_t;
                lines_added ++;
            }
        }
        if(time < time_global){
            time_global = time;
            n_global = n;
        }
    }
    cout << n_global << " " << time_global;
    
    

    return 0;
}