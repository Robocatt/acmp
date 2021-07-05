#include <iostream>
#include <fstream>
using namespace std;
 
int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    int a, b, c;
    fin >> a >> b >> c;
    fin.close();
    fout.open("OUTPUT.txt");
    fout << (a*b==c ? "YES" : "NO");
    fout.close();
    return 0;
}