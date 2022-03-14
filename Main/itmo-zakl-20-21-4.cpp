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
//0 - белый, 1 - черный
int k = 1;
void rec(vector<vector<int>> &field, int x, int y){
    if(field[x][y] == 0){
        field[x][y] = k++;
        rec(field, x, y + 1);
        rec(field, x - 1, y);
        rec(field, x, y - 1);
        rec(field, x + 1, y);
    }
    
}

int main(){
    vector<vector<int>> field(15, vector<int> (15,0));
    int k = 1, n = 15;
    for(int i = 0; i < n / 2 + 1; i++){
        field[i + n / 2 ][i] = -1;
        field[n / 2 - i][i] = -1;
        field[i][n / 2 + i] = -1;
        field[n - i - 1][n / 2 + i] = -1;
    }
    rec(field,n/2,n/2);
    for(int i = 0; i < 15; i++){
        for(int j = 0; j < 15; j++){
            cout << field[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}