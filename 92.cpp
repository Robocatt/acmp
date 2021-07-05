#include <fstream>
using namespace std;
int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");
    int n;
    fin >> n ;
    fout << n / 6 << " " << 2 * n / 3 << " " << n / 6;
    fin.close();
    fout.close();
    return 0;
}