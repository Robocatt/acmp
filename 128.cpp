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
    int n,x1,x2,y1,y2;
    cin >> n >> x1 >> y1 >> x2 >> y2;
    queue<pair<int,int>> q;
    vector<vector<int>> field(n + 1, vector<int> (n + 1, -1));
    field[x1][y1] = 0;
    q.push({x1,y1});
    while(!q.empty()){
        pair<int,int> cur;
        cur = q.front();
        q.pop();
        if(cur.first == x2 && cur.second == y2){
            cout << field[x2][y2];
            return 0;
        }
        if(cur.first < n - 1 && cur.second < n && field[cur.first + 2][cur.second + 1] == -1){
                field[cur.first + 2][cur.second + 1] = field[cur.first][cur.second] + 1;
                q.push({cur.first + 2,cur.second + 1});
        }
        if(cur.first < n  && cur.second < n - 1 && field[cur.first + 1][cur.second + 2] == -1){
                field[cur.first + 1][cur.second + 2] = field[cur.first][cur.second] + 1;
                q.push({cur.first + 1,cur.second + 2});
        }
        if(cur.first < n - 1 && cur.second > 1 && field[cur.first + 2][cur.second - 1] == -1){
                field[cur.first + 2][cur.second - 1] = field[cur.first][cur.second] + 1;
                q.push({cur.first + 2,cur.second - 1});
        }
        if(cur.first > 1 && cur.second < n - 1 && field[cur.first - 1][cur.second + 2] == -1){
                field[cur.first - 1][cur.second + 2] = field[cur.first][cur.second] + 1;
                q.push({cur.first - 1,cur.second + 2});
        }
        if(cur.first > 2 && cur.second < n && field[cur.first - 2][cur.second + 1] == -1){
                field[cur.first - 2][cur.second + 1] = field[cur.first][cur.second] + 1;
                q.push({cur.first - 2,cur.second + 1});
        }
        if(cur.first < n  && cur.second > 2 && field[cur.first + 1][cur.second - 2] == -1){
                field[cur.first + 1][cur.second - 2] = field[cur.first][cur.second] + 1;
                q.push({cur.first + 1,cur.second - 2});
        }
        if(cur.first > 1 && cur.second > 2 && field[cur.first - 1][cur.second - 2] == -1){
                field[cur.first - 1][cur.second - 2] = field[cur.first][cur.second] + 1;
                q.push({cur.first - 1,cur.second - 2});
        }
        if(cur.first > 2  && cur.second > 1 && field[cur.first - 2][cur.second - 1] == -1){
                field[cur.first - 2][cur.second - 1] = field[cur.first][cur.second] + 1;
                q.push({cur.first - 2,cur.second - 1});
        } 


    }
    

    return 0;
}