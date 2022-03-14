#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    int a1, a2, n;
    fin >> a1 >> a2 >> n;
    fin.close();
    fout.open("OUTPUT.txt");
    fout << a1 + (a2 - a1) * (n - 1);
    fout.close();
    return 0;
}