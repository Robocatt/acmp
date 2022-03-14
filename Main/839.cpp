#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    string str;
    getline(fin,str);
    fin.close();
    fout.open("OUTPUT.txt");
    fout << (str.find('0') != string::npos ? "NO" : "YES");
    fout.close();
    return 0;
}