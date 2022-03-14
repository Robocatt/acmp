#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <iomanip>
#include <set>
#include <string>
#include <map>
#include <queue>
using namespace std;


bool getNum(int max, int cur, int c){
	while (max > 0){
		int digit = cur % 10;
		if (digit == c){
			return true;
		}
		cur /= 10;
		max /= 10;
	}
	return false;
}

int magicF(int h, int m, int s, int c,int x, int a, int b ){
  return getNum(x, h, c) || getNum(a, m, c) || getNum(b, s, c); 
}

void nextSec(int& h, int& m, int& s, int a, int b, int x, int y, int z){
	s++;
	if(s == b){
    s = 0;
    m++;
  }
  if(m == a){
    m = 0;
    h++;
  }
  if(h == x && m == y && s == z){
    h = 0;
    m = 0;
    s = 0;
  }
}

int main() {
  int a, b, x, y, z;// a min in 1 hour, b sec in 1 min
  cin >> a >> b >> x >> y >> z;
  int h1,h2,m1,m2,s1,s2;
  int c;
  cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2 >> c;
  int ans = 0;
  do{
    ans += magicF(h1,m1,s1,c,x,a,b);
		nextSec(h1,m1,s1,a,b,x,y,z);
  } while(h1 != h2 || m1 != m2 || s1 != s2);
  ans += magicF(h1,m1,s1,c,x,a,b);
  cout << ans;
}