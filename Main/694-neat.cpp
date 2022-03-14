#include <fstream>
 
using namespace std;
 
int main(){
  ifstream in("INPUT.TXT");
  ofstream out("OUTPUT.TXT");
  int n, a, b, max = -1, min = 32;
  in >> n;
  for (int i = 0; i < n; i++){
    in >> a >> b;
    if (max < a){
      max = a;
    }
    if (min > b){
      min = b;
    }
  }
  out << (min >= max ? "YES" : "NO");
  in.close();
  out.close();
  return 0;
}