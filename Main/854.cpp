#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    int troom, tcond;
    string str;
    fin >> troom >> tcond >> str;
    fin.close();
    fout.open("OUTPUT.txt");
    if (str == "freeze" ) {
        fout << min(troom,tcond);
    }else if (str == "heat") {
        fout << max(troom,tcond); 
    }else if (str == "auto") {
        fout << tcond;
    }else if (str == "fan") {
        fout << troom;
    }
    fout.close();
    return 0;
}