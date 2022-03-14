#include <fstream>
using namespace std;
int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");
    int n;
    fin >> n ;
    n/=3;
    fout << 13 * n / 8 << " " << n / 2 << " " << 7 * n / 8;
    fin.close();
    fout.close();
    return 0;
}