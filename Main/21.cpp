#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    int m;
    int max = -1, min=INT32_MAX;
    while(!fin.eof()){
        fin >> m;
        if ( m > max) {
            max = m;
        }
        if (m < min) {
            min = m;
        }
    }
    fin.close();
    fout.open("OUTPUT.txt");
    fout << max-min;
    fout.close();
    return 0;
}