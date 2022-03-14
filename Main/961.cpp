#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<char>> arr1(n,vector<char> (m));
    vector<vector<char>> arr2(n,vector<char> (m));
    for(int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> arr1[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> arr2[i][j];
        }
    }
    int count = 0;
    vector<char> out;
    for(int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if(arr1[i][j] != arr2[i][j] && arr1[i][j] != '.'){
                count ++;
                out.push_back(arr1[i][j]);
            }
        }
    }
    cout << count << endl;
    sort(out.begin(),out.end());
    for(int i = 0; i < out.size(); i++){
        if(out[i] >= 'a'){
            cout << out[i];
        }
    }
    for(int i = 0; i < out.size();i++){
        if(out[i] <='Z'){
            cout << out[i];
        }else{
            return 0;
        }
    }


    
}