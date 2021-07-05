#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    int a;
    fin >> a ;
    fin.close();
    fout.open("OUTPUT.txt");
    fout << a+1;
    fout.close();
    return 0;
}