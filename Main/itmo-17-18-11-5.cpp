#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
#include <queue>
#include<optional>
typedef long long ll;
using namespace std;
using namespace std;
typedef long long ll;
 
bool arrow(bool x, bool y){
	return !x || y;
} 

bool f1(bool p, bool q, bool s){
	return !p || (q && !s);
}

bool f2(bool p, bool q, bool s){
	return q || (!p || s);
}

bool f3(bool p, bool q, bool s){
	return !p || q;
}

bool f4(bool p, bool q, bool s){
	return (!p && !s) && (!p ||q);
}
 
int main() {
 	for (int a = 0; a < 2; a++) {
		for (int b = 0; b < 2; b++){
			for (int c = 0; c < 2; c++){
				bool p = (a == 1);
				bool q = (b == 1);
				bool s = (s == 1);

				if (!arrow(f4(p, q, s), f1(p, q, s)) || !arrow(f1(p, q, s), f3(p, q, s)) || !arrow(f3(p, q, s), f2(p, q, s))){
					cout << "NO";
					return 0;
				}
			}
		}
	}
  
  return 0;
}