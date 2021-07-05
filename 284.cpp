#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");
    int n, m;
    fin >> n;
    vector <long long> arr;
    for(int i = 0; i < n; i++) {
        long long y;
        fin >> y;
        arr.push_back(y);
    }
    fin >> m;
    for(int i = 0; i < m; i++) {
        long long a, b;
        fin >> a >> b;
        do{
        fout << arr[a-1] << " ";
        a++;
        }while (a <= b);
        fout << endl;
    }    
    fin.close();
    fout.close();
    return 0;
}