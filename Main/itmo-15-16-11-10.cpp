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
        for(int m = 5; m < 6; m++){
        vector<vector<int>> mas(m + 1,vector<int> (m + 1,0));
        int k = 1;
        while(k <= m){
            int n = 1;
            while(n <= m){
                mas[k][n] = mas[n][k] + k;
                mas[n][k] = mas[k][n] - n;
                n++;
            }
            k++;
        }
        k = m;
        while(k >= 1){
            int n = m;
            while(n >= 1){
                mas[k][n] = mas[k][n] - mas[n][k];
                n--;
            }
            k--;
        }
        int count = 0;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < m; j++){
                if(mas[i][j] > 5){
                    count ++;
                }
                cout << mas[i][j] << " ";
            }
            cout << endl;
        }
        cout << count <<" " << m - 1<< endl;





    }
    
    

    return 0;
}