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
    double x = 0.6;
    for(int i = 2; i < 22; i++){
        long double div = x;
        vector<int> arr;
        int count = 0;
        while(div > 0 && count < 30){
            div *= i;
            int cur = div;
            if(cur > 0){
                arr.push_back(cur);
                div-=cur;
            }else{
                arr.push_back(0);
            }
            count++;
        }
        //if(count < 14){
            cout << i << " ";
            for(int j = 0; j < arr.size(); j++){
                cout << arr[j] << " ";
            }
            cout << endl;
        //}
    }

    return 0;
}