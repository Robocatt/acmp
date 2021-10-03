#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
using namespace std;
bool sec( const pair<int,int> &a, const pair<int,int> &b){
    return (a.second < b.second);
}
bool first(const pair<int,int> &a, const pair<int,int> &b){
    return (a.first < b.first);
}


int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<char>> arr(n, vector<char> (m));
    vector<pair<int,int>> pos(n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    bool first_is = false;
    int max_per_row = 0,max_row = 0,last_row = 0;
    for(int i = 0; i < n; i++){
        int count = 0;
        bool f = true;
        for(int j = 0; j < m; j++){
            if(arr[i][j] == '*'){
                if(f){
                    pos[i]={j,j};
                    f = false;
                }
                if(j == 0){
                    first_is = true;
                }
                count ++;
                last_row = i;
                pos[i].second = j;
            }
        }
        if(count > max_per_row){
            max_per_row = count;
            max_row = i;
        }
    }
    vector<pair<int,int>> d = pos;
    sort(pos.begin(), pos.end(),sec);
    int max_pos = pos[pos.size()-1].second;
    sort(pos.begin(), pos.end(),first);
    int min_pos = 0;
    if(!first_is){
        for(int i = 0; i <n; i++){
            if(pos[i].first != 0){
                min_pos = pos[i].first;
                break;
            }
        }
    }
    
    bool f = false;
    for(int i = 0; i < last_row + 1; i++){
        for(int j = min_pos; j < max_pos + 1; j++){
            if((d[i].first != 0 && d[i].second != 0) || f || first_is){
                arr[i][j] = '*';
                f = true;
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << arr[i][j];
        }
        cout << endl;
    }
    



   

    return 0;
}