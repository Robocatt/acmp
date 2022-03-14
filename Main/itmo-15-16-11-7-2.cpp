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
    string s, num;
    getline(cin, s);
    bool f = false;
    for (int i = 0; i < s.size(); i += 2){
        num = s[i + 1];
        if(i + 2 <= s.size() && s[i + 2] >= '0' && s[i + 2] <= '9'){
            num += s[i + 2];
            f = true;
        }
        for (int j = 0; j < stoi(num); j++){
            cout << s[i];
        }
        if(f){
            f = false;
            i++;
        }
    }
    

    return 0;
}