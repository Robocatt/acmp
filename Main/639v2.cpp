#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <iomanip> 
using namespace std;

int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    vector <pair <double, string> > arr;
    fout.open("OUTPUT.txt");
    int m, n, count = 0;
    fin >> n;
    for (int i = 0; i < n; i++) {
        fin >> m;
        count += m;
        fin.ignore(200,'\n');
        for (int j = 0; j < m; j++) {
            string x; 
            double y;
            fin >> y >> x;
            arr.push_back(make_pair(y,x)); 
        }
    }
    sort(arr.begin(), arr.end());
    reverse(arr.begin(), arr.end());
    fout << count << endl;
    for (int i = 0; i < arr.size(); i++) {
        fout << fixed << setprecision(2);
        fout << arr[i].first << " " << arr[i].second << endl;
    }
    fin.close();
    fout.close();
    return 0;
}