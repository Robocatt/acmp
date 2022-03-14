#include <fstream>
using namespace std;

int gcd(int a, int b) {

  if (a % b == 0)
    return b;

  if (b % a == 0)
    return a;

  if (a > b)
    return gcd(a%b, b);
  return gcd(a, b%a);
}
 int lcm(int a, int b) {
  return (a*b)/gcd(a,b);
}

int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");
    int x, y;
    fin >> x >> y;
    fout << lcm(x,y);

    fin.close();
    fout.close();
    return 0;
}
