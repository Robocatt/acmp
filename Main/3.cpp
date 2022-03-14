#include <iostream>
#include <fstream>
#include <string>
using namespace std; 

int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    string n;
    fin >> n;
    fin.close();
    fout.open("OUTPUT.txt");
    if (n == "5") {
        fout << "25";
    } else {
        n.erase(n.end()-1,n.end());
        long long i = stoi(n);
        fout << to_string(i * (i + 1))+"25";
    }
    fout.close();
    return 0;
}