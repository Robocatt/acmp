#include <fstream>
#include <algorithm>
using namespace std;

int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");
    long long n;
    fin >> n;
    if (n < 0) {
        fout << -n * (n-1) / 2 + 1;
    }else 
        fout << n * (n+1) / 2;
    fin.close();
    fout.close();
    return 0;
}
