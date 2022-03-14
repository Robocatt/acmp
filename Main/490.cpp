#include <fstream>
#include <vector>
#include <string>
using namespace std;

int count(string x){
    vector<int> month = {31,28,31,30,31,30,31,31,30,31,30,31};
    int year = (int)(x[7] - '3');
    int m = (int)((x[3] - '0') * 10 + (x[4] - '0'));
    int d = 0, day = 0;
    for (int i = 0; i < m - 1; i++){
        d+=month[i];
    }
    day = (int)((x[0] - '0') * 10 + (x[1] - '0'));
    return year * 365 + d + day;
}

int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");
    string a, b;
    fin >> a >> b;
    fout << count(b) - count(a);
    fin.close();
    fout.close();
    return 0;
}