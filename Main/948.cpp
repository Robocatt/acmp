#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");
    int a, b;
    fin >> a >> b;
    fout << ceil(b/a) << " " << b % a;
    fin.close();
    fout.close();
    return 0;
}