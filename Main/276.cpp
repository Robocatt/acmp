#include <fstream>
#include <algorithm>
using namespace std;

int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");
    int n, m, count = 0;
    fin >> n >> m;
    if (n % m == 0) {
        for(int i = 0; i < m; i++)
            fout << n / m << ' ';
    }else {
        while (n % m != 0) {
            count ++;
            n--;
        }
        for (int i = 0; i < m-count; i++) {
            fout << n / m << ' ';
        }
        for (int i = 0; i < count; i++){
            fout << n / m + 1 << ' ';

        }
    }
   
    fin.close();
    fout.close();
    return 0;
}

