#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    double x1, y1, x2, y2, x3, y3, a, b, c, p;
    fin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    fin.close();
    fout.open("OUTPUT.txt");
    a = sqrt( pow ( x1 - x2, 2.0 )  + pow ( y1 - y2, 2.0 ) );
    b = sqrt( pow ( x2 - x3, 2.0 )  + pow ( y2 - y3, 2.0 ) );
    c = sqrt( pow ( x1 - x3, 2.0 )  + pow ( y1 - y3, 2.0 ) );
    p = (a + b + c) / 2;
    fout << setprecision(1) << fixed;
    fout << sqrt( p * (p - a) * (p - b) * (p - c) );
    fout.close();
    return 0;
}