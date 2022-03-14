#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    int n = 0 , three = 0, four = 0;
    vector <int> arr;
    fin >> n;
    while (!fin.eof()) {
        int y;
        fin >> y;
        arr.push_back(y);
    }
    fin.close();
    fout.open("OUTPUT.txt");
    for(int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0 ) {
            fout << arr[i] << " ";
            three++;
        }
    }
    fout << endl;
    for(int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0 ) {
            fout << arr[i] << " ";
            four++;
        }
    }
    fout << endl;
    fout << (four >= three ? "YES" : "NO");
    fout.close();
    return 0;
}