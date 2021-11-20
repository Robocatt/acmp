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

void reverse_right(deque<deque<char>> &arr,deque<deque<char>> &field){
    for(int i = 0; i < arr.size(); i++){
        int plus = arr[i].size() - 1;
        for(int j = 0; j < arr[i].size();j++){
            field[i].push_back(arr[i][plus]);
            plus--;
        }
    }

}
void reverse_top(deque<deque<char>> &arr,deque<deque<char>> &field){
    for(int i = 0; i < arr.size(); i++){
        deque<char> empty;
        field.push_front(empty);
        for(int j = 0; j < arr[i].size();j++){
            field[0].push_back(arr[i][j]);
        }
    }
}
int main(){
    deque<deque<char>> arr = {{'A','B','C'},
                                {'B','C','B'},
                                {'C','A','B'}};
    deque<deque<char>> rev;
    deque<deque<char>> field = arr;
    int n = 192;
    bool f = true;
    int stage = 0;
    while(f){
        int cur_max = field.size() - 1;
        for(int i = 0; i < min(192,int(field.size())); i++){
            if(field[cur_max].size() < n){
                break;
            }
            else if(i == 191 && field[cur_max].size() >= n){
                f = false;
            }
            cur_max --;
        }
        cout << stage++;
        reverse_right(arr,field);
        reverse_top(arr,field);
        arr = field;
    }
    int last = field.size() - 1;
    cout << endl;
    cout << field[last - 45][53] << " ";
    cout << field[last - 105][104] << " ";
    cout << field[last - 123][131];

    

    return 0;
}