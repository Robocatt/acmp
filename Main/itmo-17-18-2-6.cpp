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
    int thirtytwo = 2, sixteen = 4, eight = 8, count1 = 0, count2 = 0;
    queue<pair<int,int>> arr64;
    queue<pair<int,int>> arr32;
    for (int i = 1; i < 400; i++){
        if ((i - 1) % 10 == 0){
            count1++;
            if (sixteen > 0){
                sixteen--;
                arr64.push({i,16});
            }else if (thirtytwo > 0){
                thirtytwo --;
                arr64.push({i,32});
            }else{
                cout << 1 << " " << count1 ;
                break;
            }
        }
        if ((i - 1) % 4 == 0){
            count2 ++;
            if (eight > 0){
                eight --;
                arr32.push({i,8});
            }
            else if (sixteen > 0){
                sixteen --;
                arr32.push({i,16});
            }else if (thirtytwo > 0){
                thirtytwo --;
                arr32.push({i,32});
            }else{
                cout << 2 << " "  << count2 ;
                break;
            }
        }
        pair<int,int> pa = arr64.front();
        if (63 + pa.first == i){
            arr64.pop();
            pa.second == 16 ? sixteen++ : thirtytwo++;
        }
        pa = arr32.front();
        if (31 + pa.first == i ){
            arr32.pop();
            if (pa.second == 8){
                eight++;
            }else if (pa.second == 16){
                sixteen++;
            }else{
                thirtytwo++;
            }
        }
    }

}