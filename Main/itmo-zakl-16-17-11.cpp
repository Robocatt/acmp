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

typedef long long ll;



int main() {
 	string s;
  cin >> s;
  vector<int> arr(256,0);
  int maxx = -1;
  int count = 0;
  for(int i = 0; i < s.size(); i++){
    arr[s[i]]++;
    if(arr[s[i]] > maxx){
      maxx = arr[s[i]];
      count = 1;
    }else if (arr[s[i]] == maxx){
      count++;
    }
  }
  if(maxx == 1){
    cout << s.size() << endl;
    for(int i = 0; i < arr.size(); i++){
      if(arr[i] != 0){
        cout << char(i) << endl;
      }
    }
    return 0;
  }
  if(count == 1){
    cout << 1 << endl << s << endl;
    return 0;
  }else{
    cout << 2 << endl;
    int m1 = -1, m2 = -1;
    for(int i = 0; i < arr.size(); i++){
      if(arr[i] == maxx){
        if(m1 == -1){
          m1 = i;
        }else{
          m2 = i;
          break;
        }
      }
    }
    string s1(maxx, m1);
    string s2(maxx, m2);
		arr[m1] = 0;
		arr[m2] = 0;
    for(int i = 0; i < arr.size(); i++){
      while (arr[i] > 0){
				s1.push_back(i);
				arr[i]--;
				if (arr[i] > 0){
					s2.push_back(i);
					arr[i]--;
				}
			} 
    }
    cout << s1 << endl << s2;  
  }
  
  
  
  
  
}