#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    int a,b;
    fin >> a>>b;
    fin.close();
    fout.open("OUTPUT.txt");
    if (a==b){
        fout << '=';
    } else 
        fout << (a>b ? '>' : '<');
    fout.close();
    return 0;
}