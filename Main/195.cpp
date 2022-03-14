#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    int n,a,b;
    fin >> n >> a >> b;
    fin.close();
    fout.open("OUTPUT.txt");
    fout << n*a*b*2;
    fout.close();
    return 0;
}