#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>
#include<vector>


using namespace std;



int main(){
    vector<vector<int>> ans = {{5,5,5,5,5,5,5,5}, {5,2,3,7,4,0,1,6}, {5,3,4,1,5,3,4,1},
    {5,7,1,2,4,6,3,0},{5,4,5,4,5,4,5,4}, {5,0,3,6,4,2,1,7},{5,1,4,3,5,1,4,3},{5,6,1,0,4,7,3,2}};
    for(int i = 1000000; i < 10000000; i++){
        int n=i, m = 14020881;
        vector<vector<int>> mas(8, vector<int> (8,0));
        while(m > 0){
            int i = 0;
            while(i < 8){
                int j = 0;
                while(j < 8){
                    if((i * j) % 8 == m % 8){
                        mas[i][j] = n % 8;
                    }
                    j++;
                }
                i++;
            }
            n = n / 8;
            m = m / 8;
        }
        if(mas==ans){
            cout << i;
        }
    }

    return 0;
}