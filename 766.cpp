#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    int n,m,k;
    fin >> n >> m >> k;
    fin.close();
    fout.open("OUTPUT.txt");
    fout << (n*m>=k ? "YES" : "NO");
    fout.close();
    return 0;
}