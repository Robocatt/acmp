#include <iostream>
using namespace std;

int c(int prev_level, int n) {
  if (n == 0)
    return 1;
  
  int count = 0;
  for (int level = 1; level < prev_level; level++) {
    if ((n - level) < 0){ 
      break;
    }
    count += c(level, n - level);
  }
  
  return count;
}



int main(){
    int n;
    cin >> n;
    cout << c(n + 1, n);
}