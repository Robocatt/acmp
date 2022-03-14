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
    int n, m = 1;
    for(int n = 5; n < 100; n++){
    vector<vector<int>> a(n,vector<int>(n,0));
    if(n % 2 != 0){
        a[n / 2][n / 2] = (n * n);      
    }
    for(int i = 0; i < n / 2; i++){
        for(int j = i; j < (n - i); j++){   
            a[i][j] = m;
            m++;
        }
        for(int j = 1; j < (n - i - i); j++){   
            a[j + i][n - i - 1] = m;    
            m++;
        }
        for(int j = (n - 2) - i; j >= i; j--){  
            a[n - i - 1][j] = m;            
            m++;
        }
        for(int j = n - i - 2; j > i; j--){
            a[j][i] = m;
            m++;
        }
    }
    int maxx = 0;
    for(int i = 0; i < n; i++){
        int count = 0;
        for(int j = 0; j < n; j++){
            count += a[i][j];
        }
        maxx=max(maxx,count);
    }
    if(maxx == 10581){
        cout << n;
    }
    }
    return 0;
}