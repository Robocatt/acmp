#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main() {
    ifstream fin("D:\\Programming\\cpp\\acmp\\INPUT.txt");
    ofstream fout;
    fout.open("D:\\Programming\\cpp\\acmp\\OUTPUT.txt");
    int a, b,min,max;
    fin >> a >> b ;
    
    if (a == 0 && b == 0) {
        fout << 0 << " " <<0;
    }else if ( a == 0 ) {
        fout << "Impossible";
    }else {
        if (a - b >= 0 ) {
            fout << a << " " << a + b - 1;
        }else {
            fout << b  << " " << a + b - 1;
        }
    }
    fin.close();
    fout.close();
    return 0;
}