#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    int k;
    fin >> k;
    fin.close();
    fout.open("OUTPUT.txt");
    fout << k*100 + 90 + 9 - k;
    fout.close();
    return 0;
}