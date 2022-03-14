#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");
    int m, tmp;
    fin >> tmp;
    int max = -1, min = INT32_MAX, count = 1;
    while(!fin.eof()){
        fin >> m;
        if ( m <= 437 ) {
            fout << "Crash" << " " << count;
            break;
        }
        else {
            count++;
        }
    }
    if (fin.eof()) {
        fout << "No crash";
    }
    fin.close();
    fout.close();
    return 0;
}