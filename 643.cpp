#include <fstream>
#include <algorithm>
using namespace std;

int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");
    int n, m, v,count = 0;
    fin >> n;
    m = n;
    while(m != 0) {
        v = m % 2;
        m/=2;
        if (v == 1)
            count++;
    }
    fout << n + count;

    fin.close();
    fout.close();
    return 0;
}
