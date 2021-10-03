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
    int n,m,k;
    cin >> n >> m >> k;
    vector<vector<int>> field(n+2,vector<int>(m+2,0));
    for(int i = 0; i < k; i++){
        int a,b;
        cin >> a >> b;
        field[a][b] = -1;
        if(field[a+1][b] != -1){
            field[a+1][b] += 1;
        }
        if(field[a-1][b] != -1){
            field[a-1][b] += 1;
        } 
        if(field[a][b+1] != -1){
            field[a][b+1] += 1;
        } 
        if(field[a][b-1] != -1){
            field[a][b-1] += 1;
        } 
        if(field[a+1][b+1] != -1){
            field[a+1][b+1] += 1;
        } 
        if(field[a+1][b-1] != -1){
            field[a+1][b-1] += 1;
        } 
        if(field[a-1][b+1] != -1){
            field[a-1][b+1] += 1;
        } 
        if(field[a-1][b-1] != -1){
            field[a-1][b-1] += 1;
        } 
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(field[i][j] == -1){
                cout << "*";
            }else if(field[i][j] == 0){
                cout << ".";
            }else{
                cout << field[i][j];
            }
        }
        cout<<endl;
    }

    return 0;
}