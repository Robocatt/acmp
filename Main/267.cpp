#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

unsigned long long f(unsigned long long m, long long x, long long y) {
    long long  u = (m / x ) +(m / y);
    return u;  
} 


int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");
    unsigned long long n,x,y;
    fin >> n >> x >> y;
    unsigned long long l = 0;
    unsigned long long r = INT32_MAX;
    unsigned long long time = min(x,y);
    if (n == 1) {
        fout << time;
    }else {
        while (r - l >1) {
            int m = l + (r - l) / 2;
            if (f(m,x,y)>= n-1){
                r = m;
            }else {
                l = m;
            }
        }
    time +=r;
    fout << time;
    }
    

    fin.close();
    fout.close();
    return 0;
}