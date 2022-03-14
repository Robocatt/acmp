#define _USE_MATH_DEFINES
#include <fstream>
#include <iostream>
#include <math.h>
#include <vector>
#include <cmath>
#include <iomanip>
#include <string>
#include <set>
#include <algorithm>
#include <deque>
#include <map>
#include <sstream>
#include <unordered_set>
#include <unordered_map>
typedef unsigned long long ul;
typedef long long ll;
typedef long double ld;
typedef double db;
using namespace std;
ifstream in("input.txt");
ofstream out("output.txt");

class T{
  public: 
  int a;
  int b;
  int c;
  int d;
  int n;

  T(int _n, int _a, int _b, int _c, int _d){
    n = _n;
    a = _a;
    b = _b;
    c = _c;
    d = _d;
  }
};

bool comp(T &a1, T &a2){
  return a1.d < a2.d;
}


int main()
{
	vector<T> arr;
  arr.push_back(T(1,1,1,1,1));
  arr.push_back(T(2,13,9,7,6));
  arr.push_back(T(3,2,17,13,11));
  arr.push_back(T(4,14,2,19,16));
  arr.push_back(T(5,3,10,2,21));
  arr.push_back(T(6,15,18,8,2));
  arr.push_back(T(7,4,3,14,7));
  arr.push_back(T(8,16,11,20,12));
  arr.push_back(T(9,5,19,3,17));
  arr.push_back(T(10,17,4,9,22));
  arr.push_back(T(11,6,12,15,3));
  arr.push_back(T(12,18,20,21,8));
  arr.push_back(T(13,7,5,4,13));
  arr.push_back(T(14,19,13,10,18));
  arr.push_back(T(15,8,21,16,23));
  arr.push_back(T(16,20,6,22,4));
  arr.push_back(T(17,9,14,5,9));
  arr.push_back(T(18,21,22,11,14));
  arr.push_back(T(19,10,7,17,19));
  arr.push_back(T(20,22,15,23,24));
  arr.push_back(T(21,11,23,6,5));
  arr.push_back(T(22,23,8,12,10));
  arr.push_back(T(23,12,16,18,15));
  arr.push_back(T(24,24,24,24,20));

  sort(arr.begin(), arr.end(), comp);  
 
  int count = 0;
  for(int i = 0; i < 24; i++){
    for(int j = 0; j < i; j++){
      if(arr[j].n > arr[i].n){
        count++;
      }
    }
  }
  cout << count;

}