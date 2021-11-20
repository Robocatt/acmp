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
typedef unsigned long ul;
typedef long long ll;
typedef long double ld;
typedef double db;
using namespace std;




int main() {
  double ax, ay, bx, by;
  double k;
  cin >> ax >> ay >> bx >> by >> k;
  int x = min(ax, bx), y = min(ay, by);
  ax = ax - x;
  bx = bx - x;
  ay = ay - y;
  by = by - y;
  if(ay > by){
    swap(ay, by);
    swap(ax, bx);
  }
  if(ay == by && ax > bx){
    swap(ax, bx);
  }
  double cx = abs(bx - ax) / 2; 
  double cy = abs(ay - by) / 2;
  double ac = sqrt(abs(bx - ax) * abs(bx - ax) + abs(by - ay) * abs(by - ay)) / 2;
  double ad = sqrt(ac * ac + 2 * k * ac);

  double z = ad * ad - 4 * k * k * ac * ac - ax * ax - ay * ay +  cx * cx + cy * cy;
  double dx;
  if((4 * (cx - ax) * (cy - ay))  - (2 * cx - 2 * ax ) * (2 * cx - 2 * ax ) == 0){
    dx = 0;
  }else{
    dx = (z * 2 * (cy - ay) + 2 * z * (ax - cx)) / ((4 * (cx - ax) * (cy - ay))  - (2 * cx - 2 * ax ) * (2 * cx - 2 * ax ) );
  }
  double dy = (z - 2 * dx * (cx - ay)) / (2 * cy - 2 * ay);  

  cout << ax << " " << ay << " " << bx << " " << by << " " << cx << " " << cy << " " << ac << " " << ad << " " << z << " " << dx << endl;
  cout << fixed << setprecision(4) << dx + x << " " << dy + y;

}