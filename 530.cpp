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
    int w, h,a,b,c,d;
    cin >> w >> h;
    vector<vector<int>> i1(h,vector<int> (w)),i2(h,vector<int> (w)),i3(h,vector<int> (w));
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            char c;
            cin >> c;
            i1[i][j] = c - '0';
        }
    }
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            char c;
            cin >> c;
            i2[i][j] = c - '0';
        }
    }
    char a1,a2,a3,a4;
    cin >> a1 >> a2 >> a3 >> a4;
    a = a1 -'0';
    b = a2 -'0';
    c = a3 -'0';
    d = a4 -'0';
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            if(i1[i][j] == 0 && i2[i][j] == 0){
                i3[i][j] = a;
            }
            else if(i1[i][j] == 0 && i2[i][j] == 1){
                i3[i][j] = b;
            }
            else if(i1[i][j] == 1 && i2[i][j] == 0){
                i3[i][j] = c;
            }
            else if(i1[i][j] == 1 && i2[i][j] == 1){
                i3[i][j] = d;
            }
        }
    }
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cout << i3[i][j];
        }
        cout << endl;
    }


    return 0;
}