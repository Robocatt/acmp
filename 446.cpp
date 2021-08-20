#include <iostream> 
#include <vector> 
#include <map> 
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<char>> arrad(n,vector<char> (m));
    vector<vector<int>> arrtable(n,vector<int> (m));
    
    map<int, vector<bool>> mp ={ {0,{1,0,0,0}}, {1,{1,0,0,1}},{2,{1,0,1,0}},{3,{1,0,1,1}},{4,{1,1,0,0}},
    {5,{1,1,0,1}}, {6,{1,1,1,0}},{7,{1,1,1,1}} }; 
    // черный - красный - зеленый - синий
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arrad[i][j];
        }
    }
    
    for(int i = 0; i < n; i++){
        for ( int j = 0; j < m; j++ ){
            cin >> arrtable[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            vector<bool> temp = mp[arrtable[i][j]];
            if(arrad[i][j] == 'G' && temp[2]!= 1){
                cout << "NO";
                return 0;
            }else if (arrad[i][j] == 'R' && temp[1]!= 1){
                cout << "NO";
                return 0;
            }else if (arrad[i][j] == 'B' && temp[3]!= 1){
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";

}