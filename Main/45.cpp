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
    int n;
    cin >> n;
    string s;
    if(n == 0){
        cout << 10;
        return 0;
    }else if (n == 1){
        cout << 1;
        return 0; 
    }else{
        for(int i = 9; i > 1 && n > 1; i--){
            while(n % i == 0 && n > 1){
                s += char(i + '0');
                n /= i;
            }
        }
        if(s == "" || n > 2){
            cout << -1;
        }else{
            reverse(s.begin(),s.end());
            cout << s;
        }
    }
    

    return 0;

}