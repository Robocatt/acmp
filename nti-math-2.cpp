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
    int count = 0,count_all = 0;
    for(int i = 1; i <10; i+=2){
        for(int j = 1; j < 10; j+=2){
            for(int k = 1; k < 10; k+=2){
                for(int l = 1; l < 10; l+=2){
                    if(i!= j && i != k && i != l && j != k && j != l && k != l){
                        count_all++;
                        if(i + j == k + l || i + k == j + l || i + l == j +k || j + k == i + l || j + l == i + k || k + l == i + j){
                            count ++;
                            cout << i << j << k << l << "+++++++++" << endl;
                        }else{
                            cout << i << j << k << l << endl;
                        }
                        
                    }
                }
            }
        }

    }
    cout << count << " " << count_all;
    

    return 0;
}