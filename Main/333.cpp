#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
  
using namespace std;
 
int gcd(int a, int b){
    return (b == 0 ? a : gcd(b, a % b));
}
  
int main() {
  string s1, s2, s3;
  set<char> se1;
  set<char> se2;
  set<char> se3;
  vector<char> arr;
  cin >> s1 >> s2 >> s3;
  for (int i = 0; i < s1.size(); i++) {
    se1.insert(s1[i]);
  }
  for (int i = 0; i < s2.size(); i++) {
    se2.insert(s2[i]);
  }
  for (int i = 0; i < s3.size(); i++) {
    se3.insert(s3[i]);
  }
 
  for(char i = '0'; i <= '9'; i++) {
    if (se1.find(i) != se1.end() && se2.find(i) != se2.end() && se3.find(i) != se3.end()){
      arr.push_back(i);
    }
 
  }
  cout << arr.size() << endl;
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << " ";
  }
  return 0;
}