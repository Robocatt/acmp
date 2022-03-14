#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <set>
#include <math.h>
#include <map>
#include <limits.h>
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <unordered_set>
#include <sstream>
#include <deque>
#include <time.h>
#include <list>
#include <iomanip>
#include <queue>
#include <cctype>
#include <stdlib.h>
using namespace std;
typedef long long ll;
#define inf 2000000001
#define infD 200000000001
#define infL 2000000000000001
#define module 1000000007
 
 
bool isGood(string a) {
  vector<string> st;
  string t;
  for (int i = 0; i < a.size(); i++) {
    if (a[i] == '<') {
      if (a.find('>', i) == string::npos) {
        return false;
      }
      int j = a.find('>', i);
      string t = a.substr(i + 1, j - i - 1);
 
      if (t[0] != '/') {
                for (char c : t){
                    if (!isalpha(c)){
                        return false;
                    }
                }
        st.push_back(t);
                i = j;
        continue;
      }
      if (st.size() != 0 && t.substr(1) == st.back()) {
        st.pop_back();
                i = j;
      }
      else {
        return false;
      }
    } else {
            return false;
        }
  }
 
  return st.size() == 0;
}
 
  
int main()
{
  string a;
  cin >> a;
  vector<char> vec;
  vec.push_back('<');
  vec.push_back('>');
  vec.push_back('/');
  for (int i = 0; i < 26; i++) {
    vec.push_back(char('a' + i));
  }
 
  for (int i = 0; i < a.size(); i++) {
    string p = a;
    for (int j = 0; j < vec.size(); j++) {
      p[i] = vec[j];
      if (isGood(p)) {
        cout << p;
        return 0;
      }
    }
  }
}