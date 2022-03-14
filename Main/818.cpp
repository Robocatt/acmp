#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    int n, connections;
    int count = 0;
    fin >> n;
    for (int i = 0; i < n; i++){
        fin >> connections;
        count = count + connections - 1;
    }
    fin.close();
    fout.open("OUTPUT.txt");
    fout << count + 1;
    fout.close();
    return 0;
}