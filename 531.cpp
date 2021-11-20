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

typedef long long ll;

int main(){
    int x1, y1, x2, y2, x3, y3, r;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> r;
    if(x1 > x2){
      swap(x1,x2);
    }
    if(y1 > y2 ){
      swap(y1,y2);
    }
    int count = 0;
    for(int i = x3 - r; i <= x3 + r; i++){
      if(x2 < i || x1 > i){
        continue;
      }
      double yup = y3 + sqrt(r * r - (i - x3) * (i - x3));
      double ydown = y3 - sqrt(r * r - (i - x3) * (i - x3));
      int yu = floor(min(yup, double(y2)));
      int yd = ceil(max(ydown, double(y1)));
      count += max(yu - yd + 1, 0);
      
    }

    cout << count;
}


