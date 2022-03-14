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




bool pos = false, neg = false, inc = false;

vector<char> parse(string s){
    pos = false, neg = false, inc = false;
    vector<char> positions(20,'.');
    int count = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '#'){
            positions[i] = '#';
            if(i == 0 || s[i - 1] == '.'){
                count++;
            }
        }
    }


    if(count == 1){
        neg = true;
        return positions;
    }else if(count == 3){
        pos = true;
        return positions;
    }else{
        inc = true;
        return {-1, -1};
    }
}

int main(){
    int t;
    cin >> t;
    for(int iiii = 0; iiii < t; iiii++){
        string s;
        cin >> s;
        vector<char> arr = parse(s);
        for(int i = 0; i < 9; i++){
            cin >> s;
            if(pos || neg){
                for(int j = 0; j < s.size(); j++){
                    if(arr[j] != s[j]){
                        inc = true;
                        pos = false;
                        neg = false;
                    }
                }
            }
        }


        
        if(inc){
            cout << "Incorrect" << endl; 
        }else if(pos){
            cout << "Positive" << endl;
        }else{
            cout << "Negative" << endl;
        }



    }




    return 0;
}