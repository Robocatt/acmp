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
    fout << ( str[0] + str[1] + str[2] != str[3] + str[4] + str[5] ? "NO" : "YES");
    fout.close();
    return 0;
}