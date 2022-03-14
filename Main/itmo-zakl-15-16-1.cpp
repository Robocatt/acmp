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

string to_double(int a){
    string f;
    while(a > 0){
        f.push_back(a % 2 + '0');
        a /= 2;
    }
    return f;
}

bool f(int a){
    int count = 0, count1 = 0;
    string s = to_double(a);
    for(int i = 0; i < s.size(); i++){
        count += s[i] - '0'; 
    }
    a++;
    s = to_double(a);
    for(int i = 0; i < s.size(); i++){
        count1 += s[i] - '0'; 
    }
    if(3 * count1 == count ){
        return true;
    }else{
        return false;
    }

}

int main(){
    int countt = 0;
    for(int i = 1; i < 8192; i++){
        if(f(i)){
            countt++;
        }
    }
    cout << countt;
    
    return 0;
}