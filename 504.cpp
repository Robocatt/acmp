#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;


int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");
    int n;
    string x = "GCV";
    fin >> n;
    for (int i = 0; i < n; i++) {
        swap(x[1],x[2]);
        swap(x[0],x[1]);
    }

    fout << x;
    fin.close();
    fout.close();
    return 0;
}