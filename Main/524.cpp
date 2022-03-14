#include<iostream>
#include<iomanip>
#include<vector>
#include<set>
#include<queue>
#include<deque>
#include<map>
#include<algorithm>
#include<cmath>
#include<string>
using namespace std;

int main(){
     int x1, y1, x2, y2;
     cin >> x1 >> y1 >> x2 >> y2;
     if (x2 == x1 && y2 == y1) {
          cout << 0;
          return 0;
     } 
     if (abs(x2 - x1) == abs(y2 - y1)){
          cout << 1;
          return 0;
     }
     if ((abs(x2 - x1) + abs(y2 - y1)) % 2 > 0) {
          cout << 0;
          return 0;
     } 
     for (int i = 1; i <= 8; i++){
          for (int j = 1; j <= 8; j++){
               if ((abs(i - x1) == abs(j - y1) && abs(x2 - i) == abs(y2 - j))) {
                    cout << 2 << endl << i << " " << j;
                    return 0;
               }
          }
     }
     return 0;
}