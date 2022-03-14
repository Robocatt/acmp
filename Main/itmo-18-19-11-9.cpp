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
//deque<deque<int>> de1={{0,1,2,3},{4,5,6,7},{8,9,10,11},{12,13,14,15}};
deque<deque<int>> de2 ={     
{0, 1, 2, 3, 4, 5, 0, 1, 2, 3},
{4, 5, 0, 1, 2, 3, 4, 5, 0, 1},
{2, 3, 4, 5, 0, 1, 2, 3, 4, 5},
{0, 1, 2, 3, 4, 5, 0, 1, 2, 3},
{4, 5, 0, 1, 2, 3, 4, 5, 0, 1},
{2, 3, 4, 5, 0, 1, 2, 3, 4, 5},
{0, 1, 2, 3, 4, 5, 0, 1, 2, 3},
{4, 5, 0, 1, 2, 3, 4, 5, 0, 1},
{2, 3, 4, 5, 0, 1, 2, 3, 4, 5},
{0, 1, 2, 3, 4, 5, 0, 1, 2, 3},
};
deque<deque<int>> ans = {
{5, 0, 1, 2, 3, 0, 1, 2, 3, 4},
{3, 4, 5, 0, 1, 4, 5, 0, 1, 2},
{1, 2, 3, 4, 5, 2, 3, 4, 5, 0},
{5, 0, 1, 2, 3, 0, 1, 2, 3, 4},
{3, 4, 5, 0, 1, 4, 5, 0, 1, 2},
{1, 2, 3, 4, 5, 2, 3, 4, 5, 0},
{5, 0, 1, 2, 3, 0, 1, 2, 3, 4},
{5, 0, 1, 2, 3, 0, 1, 2, 3, 4},
{3, 4, 5, 0, 1, 4, 5, 0, 1, 2},
{1, 2, 3, 4, 5, 2, 3, 4, 5, 0},
};
void move_x(deque<deque<int>> &de2){
    deque<int> de0 = de2[0];
    de2.pop_front();
    de2.push_back(de0);
}
void move_y(deque<deque<int>> &de2){
    for(int i = 0; i < de2.size(); i++){
        int tmp = de2[i][0];
        de2[i].pop_front();
        de2[i].push_back(tmp);
    }
}
int main(){
    for(int i = 0; i < 10; i++){
        move_x(de2);
        for(int j = 0; j < 10; j++){
            move_y(de2);
            if(de2 == ans){
                cout << i + 1 << " " << j + 1;
                break;
            }
        }
    }
    
    
    

    return 0;
}