#include <fstream>
#include <vector>
#include <set>
using namespace std;

unsigned long long f(unsigned long long x , int w, int h) {
    return (x / w) * (x / h);
}
int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");
    int w,h,n;
    fin >> w >> h >> n;
    unsigned long long l = 0;
    unsigned long long r = INT64_MAX;
    while(r-l>1){
        unsigned long long m = l + (r - l) / 2;
        if (f(m,w,h) >= n){
            r = m;
        }else 
            l = m;
    }
    fout << r;


    fin.close();
    fout.close();
    return 0;
}