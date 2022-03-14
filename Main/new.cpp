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
#include<stdio.h>
#include<algorithm>
typedef unsigned long long ul;
typedef long long ll;
using namespace std;

int fromn(int n, string s){
    int cur = 0;
    int poww = s.size() - 1;
    for(int i = 0; i < s.size(); i++){
        cur += (s[i] - '0') * pow(n,poww);
        poww--;
    }
    return cur;
}

bool f1(bool a, bool b, bool z){
    return ((a || !b) && (!a || b)) || (!a && z) || (a && !z);
}

bool f2(bool a, bool b, bool z){
    return !z || (!b && a) || (b && a);
}
bool f3(bool a, bool b){
    return !a && b;
}

int main(){

    char buffer[50];
    int a;
    cin >> a;
    itoa(a,buffer,5);
    printf ("%s\n",buffer);
   
    itoa(a,buffer,36);
    printf ("%s\n",buffer);

    return 0;
}