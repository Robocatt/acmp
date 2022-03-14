#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

int main() {
    ifstream fin("D:\\Programming\\cpp\\acmp\\INPUT.txt");
    ofstream fout;
    vector <vector <int>> arr;
    fout.open("D:\\Programming\\cpp\\acmp\\OUTPUT.txt");
    int m, n, count = 0;
    fin >> n;
    for (int i = 0; i < n; i++) {
        fin >> m;
        count += m;
        fin.ignore(200,'\n');
        for (int j = 0; j < m; j++) {
            string x ; 
            getline(fin, x);
            arr.push_back(x);
        }
    }
    sort(arr.begin(), arr.end());
    fout << count << endl;
    for (int i = 0; i < arr.size(); i++) 
        fout << arr[i] << endl;
    fin.close();
    fout.close();
    return 0;
}