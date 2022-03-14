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

int main(){
    int n, k ,x;
    cin >> n >> k >> x;
    vector<vector<int>> arr(n, vector<int> (x,0));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < x; j++){
            arr[i][j] = 1;
            int left = k;
            pair<int,int> = {i,j};
            for(int k = 0; k < n; k++){
                for(int l = 0; l < x; l++){
                    if(arr[k][l] != 1 && l < j && )
                }
            }
        }
    }
    

    return 0;
}