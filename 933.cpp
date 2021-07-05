#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    int a, b, c, t;
    fin >> a >> b >> c >> t;
    fin.close();
    fout.open("OUTPUT.txt");
    if ( a <= t) {
        fout << a * b + (t - a) * c;
    } else {
        fout << t*b;
    }
    fout.close();
    return 0;
}