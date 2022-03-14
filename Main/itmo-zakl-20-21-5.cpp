#define _USE_MATH_DEFINES
#include<iostream>
#include<fstream>
#include<vector>
#include<queue>
#include<deque>
#include<set>
#include<map>
#include<string>
#include<utility>
#include<cmath>
#include<algorithm>
typedef unsigned long long ul;
typedef long long ll;
using namespace std;


int main(){
    for(int ii = 77; ii < 1000; ii++){
        for(int j = 1001; j < 1002; j++){
            for(int k = 1; k < 100000; k++){
                vector<int> t ={7,ii,j,k};
                int r = t[0];
                int i = 1;
                while(i < 4){
                    int tmp = r;
                    while(r != t[i]){
                        r += tmp;
                    }
                    i++;
                }

                //if(r == 23023){
                    cout << ii<< " " << j << " " <<k <<" " <<"!!!"<<r<< endl;
                //}
            }
        }
    }
    


    return 0;
}