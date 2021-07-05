#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    int k,m;
    fin >> k >> m;
    fin.close();
    fout.open("OUTPUT.txt");
    fout << m - 1 << " " << k - 1;
    fout.close();
    return 0;
}