#include <vector>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");
    int n, m = 1;
    fin >> n;
    while (m < n)
        m *= 2;
    fout << (m == n ? "YES" : "NO");

    fin.close();
    fout.close();
    return 0;
}