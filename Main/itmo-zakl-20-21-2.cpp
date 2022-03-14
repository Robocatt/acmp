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
    string s;
    vector<char> arr = {'A', 'B', 'C'};
    int pos1 = 0;
    int pos2 = 0;
    for(int i = 1; i < 10000; i++){
        s.push_back(arr[pos1]);
        pos1 = (pos1 + 1) % 3;
        if(i % 2 == 0){
            s.push_back('A');
        }
        if(i % 3 == 0){
            s.push_back(arr[pos2]);
            pos2 = (pos2 + 1) % 2;
        }
        //cout << s << endl;
    }
    set<string> se;
    for(int i = 0; i + 2 < s.size(); i++){
        se.insert(s.substr(i, 3));
    }
    cout << se.size();


    return 0;
}