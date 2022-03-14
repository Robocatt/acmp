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
    cin >> s;
    if (s == "0000"){
        cout << "No solution";
        return 0;
    }else if(s[3] == '1' ){
        for(int i = 0; i < n; i++){
            cout << 1;
        }
    }else if ( s == "0010" ){
        cout << 1;
        for(int i = 0; i < n - 1; i++){
            cout << 0;
        }

    }else if (s=="0110" || s == "0100" ){
        if(n % 2 == 1){
            for(int i = 0; i < n ; i++){
                cout << 1;
            }
        }else{
            for(int i = 0; i < n - 2; i++){
                cout << 1;
            }
            cout << 0 << 1;
        }

    }else if (s == "1000" || s == "1010"){
        for(int i = 0; i < n - 1; i++){
            cout << 1;
        }
        cout << 0;

    }else if (s == "1100" || s == "1110"){
        if (n % 2 == 1){
            for(int i = 0; i < n; i++){
                cout << 1;
            }
        }else{
            cout << 0;
            for(int i = 0; i < n - 1; i++){
                cout << 1;
            }

        }
    }
    

    

    return 0;
}