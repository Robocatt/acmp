#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    int first = 0, second = 0;
    for (int i = 0; i < 4; i++) {
        int a, b;
        fin >> a >> b;
        first+=a;
        second+=b;
    }
    fin.close();
    fout.open("OUTPUT.txt");
    if (first > second) {
            fout << '1';
        } else if (first < second) {
            fout << '2';
        }else 
        fout << "DRAW";

    fout.close();
    return 0;
}