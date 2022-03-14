#include <fstream>
#include <string>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
  
ull f(ull m, ull a, ull b, ull w, ull h) {
    ull ax = a + 2 * m;
    ull bx = b + 2 * m;
    ull i = (w / ax) * (h / bx);
    return i;
}
int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");
    ull n, a, b, w, h;
    fin >> n >> a >> b >> w >> h;
    ull l = 0;
    ull r = min(w, h) + 1;
    while (r - l > 1){
        ull m = (r + l) / 2;
       if (f(m,a,b,w,h) >= n){
            l= m;
        }else
            r = m;
    } 
    ull temp = l;
     l = 0;
    r = min(w, h) + 1;
    while (r - l > 1){
        ull m = (r + l) / 2;
       if (f(m,b,a,w,h) >= n){
            l = m;
        }else
            r = m;
    } 
    fout << max(temp,l);
 
    fin.close();
    fout.close();
    return 0;
}