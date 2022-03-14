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

vector<vector<vector<int>>> mem (50, vector<vector<int>> (50, vector<int> (50,-1)));

int rec(int a, int b, int c){
    if(a <= 0 || b <= 0 || c <= 0){
        return 1;
    }
    if(a < 21 && b < 21 && c < 21 && mem[a][b][c] != -1){
        return mem[a][b][c];
    }
    if(a > 20 || b > 20 || c > 20){
        return rec(20,20,20);
    }
    if(a < b && b < c){
        mem[a][b][c] = rec(a, b ,c - 1) + rec(a, b - 1,c - 1) - rec(a, b - 1, c);
        return mem[a][b][c];
    }
    mem[a][b][c] = rec(a - 1, b, c) + rec(a - 1, b - 1, c) + rec(a - 1, b, c - 1) - rec(a - 1, b - 1, c - 1);
    return mem[a][b][c];
}

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    cout << rec(a,b,c);


    return 0;
}
