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
    ifstream fin("input.txt");
    string s;
    vector<pair<string,int>> arr(5,{"",-1});//вирт адрес, счетчик
    int count = 0;
    while(fin >> s){
        if(s[0] != '1'){
            continue;
        }

        bool f = false;
        string cur_cell = s.substr(1);
        for(int i = 0; i < 5; i++){
            if(arr[i].first == cur_cell){
                count++;
                arr[i].second = 0;
                f = true;
                break;
            }
        }
        if(!f){
            bool n = false;
            for(int i = 0; i < 5; i++){
                if(arr[i].second == -1){
                    n = true;
                    arr[i] = {cur_cell, 0};
                    break;
                }
            }
            int num = 0, maxx = -1;
            if(!n){
                for(int i = 0; i < 5; i++){
                    if(arr[i].second > maxx){
                        maxx = arr[i].second;
                        num = i;
                    }
                }
                arr[num]={cur_cell,0};
            }
        }
        for(int i = 0; i < 5; i++){
            if(arr[i].second != -1){
                arr[i].second++;
            }
        }
    }

    cout << count;





    return 0;
}