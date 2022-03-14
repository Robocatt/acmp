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

bool checkb(vector<vector<int>> &arra,vector<vector<int>> &arrb){
    vector<vector<int>> arrbmy(arra.size(), vector<int> (arra[0].size()));
    for(int i = 0; i < arra.size(); i++){
        for(int j = 0; j < arra[0].size(); j++){
            int x = 0;
            for(int k = 0; k <= i; k++){
                for(int l = 0; l <= j; l++){
                    x += arra[k][l];
                }
            }
            arrbmy[i][j] = (x == 0 ? 0 : 1); 
        }
    }
    return arrbmy == arrb;
    
}
bool checkc(vector<vector<int>> &arra,vector<vector<int>> &arrc){
    vector<vector<int>> arrcmy(arra.size(), vector<int> (arra[0].size()));
    for(int i = 0; i < arra.size(); i++){
        for(int j = 0; j < arra[0].size(); j++){
            int x = 0;
            for(int k = i; k <= arra.size() - 1; k++){
                for(int l = j; l <= arra[0].size() - 1; l++){
                    x += arra[k][l];
                }
            }
            arrcmy[i][j] = (x == 0 ? 0 : 1); 
        }
    }
    return arrcmy == arrc;
    
}


int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> arra(n, vector<int> (m,1));
    vector<vector<int>> arrb(n, vector<int> (m));
    vector<vector<int>> arrc(n, vector<int> (m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arrb[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arrc[i][j];
        }
    }

    for(int i = 0; i < n; i++){ // получение максимального количества 0 из B
        for(int j = 0; j < m; j++){
            if(arrb[i][j] == 0){
                for(int k = 0; k <=i; k++){
                    for(int l = 0; l <= j; l++){
                        arra[i][j] = 0;
                    }
                }
            }
        }
    }
    for(int i = 0; i < n; i++){// получение максимального количества 0 из С
        for(int j = 0; j < m; j++){
            if(arrc[i][j] == 0){
                for(int k = i; k <= n - 1; k++){
                    for(int l = j; l <= n - 1; l++){
                        arra[i][j] = 0;
                    }
                }
            }
        }
    }

    if(checkb(arra,arrb) && checkc(arra,arrc)){// проверим какие матрицы B и C получим для A  
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cout << arra[i][j] << " ";
            }
            cout << endl;
        }
    }else{
        cout << -1;
    }


    return 0;
}