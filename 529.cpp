#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    double x1, y1, x2, y2;
    fin >> x1 >> y1 >> x2 >> y2;
    fin.close();
    fout.open("OUTPUT.txt");
    fout << setprecision(5) << fixed;
    fout << sqrt( pow ( x2 - x1, 2.0 )  + pow ( y2 - y1, 2.0 ) );
    fout.close();
    return 0;
}