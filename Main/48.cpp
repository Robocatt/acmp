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
    string s;
    cin >> s;
    cout << 1;
    for(int i = s.size() - 1; s[i] == '0' && i >= 0; i--){
        cout << 0;
    }
    

    return 0;
}