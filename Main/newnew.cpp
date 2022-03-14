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
    string s = "123242";
    int count = 0;
    do{
        if(s.find("22") == string::npos){
            count ++;
        }
    }while(next_permutation(s.begin(), s.end()));
    cout << count;

    return 0;
}