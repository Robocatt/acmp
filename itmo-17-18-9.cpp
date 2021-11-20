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
    vector<char> arr= {'A','A','A','A','A','A','B','B','B','B'};
    queue<char> q;
    int time_min = INT16_MAX;
    do{
        for(int i = 0; i < 10;i++){
            q.push(arr[i]);
        }
        int time_left_x = 0, time_left_y = 0,all_time = 0; 
        while(true){
            if(q.empty() && time_left_x == 0 && time_left_y == 0){
                if(time_min > all_time){
                    time_min = all_time;
                }
                break;
            }
            if(time_left_x == 0 && !q.empty()){
                char cur = q.front();
                q.pop();
                if(cur == 'A'){
                    time_left_x+=3;
                }else{
                    time_left_x+=7;
                }   
            }
            else if(time_left_x != 0){
                time_left_x--;
            }
            if(time_left_y == 0 && !q.empty()){
                char cur = q.front();
                q.pop();
                if(cur == 'A'){
                    time_left_y+=11;
                }else{
                    time_left_y+=8;
                }   
            }
            else if(time_left_y != 0){
                time_left_y--;
            }
            all_time++;
        }
        cout << all_time << endl;
    }while((next_permutation(arr.begin(),arr.end())));
    cout << time_min;

    return 0;
}