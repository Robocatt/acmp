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
map<int,int> mp;

void getNum(int max, int cur){
	while (max > 0){
		int digit = cur % 10;
		mp[digit]++;
		cur /= 10;
		max /= 10;
	}
}

void nextSec(int& h, int& m, int& s){
	s++;
	if(s == 60){
    s = 0;
    m++;
  }
  if(m == 60){
    m = 0;
    h++;
  }
  if(h == 24 && m == 00 && s == 00){
    h = 0;
    m = 0;
    s = 0;
  }
}

int main(){
    int h, m, s,h2,m2,s2;
    char c;
    bool f = false;
    cin >> h >> c >> m >> c >> s >> h2 >> c >> m2 >> c >> s2;
    while(h != h2 || m != m2 || s != s2){
        getNum(24,h);
        getNum(60,m);
        getNum(60,s);
	    nextSec(h, m, s);
    }  
    getNum(24,h);
    getNum(60,m);
    getNum(60,s);
    
    for(int i = 0; i < 10; i++){
        if(mp.find(i) == mp.end()){
            cout << 0 << endl;
        }else{
            cout << mp[i] << endl;
        }
    }
  

    return 0;
}