#include <fstream>
using namespace std;
int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");
    int n;
    fin >> n;
    if (n == 1)
        fout << n + 1 <<' ' << n + 8;
    else if (n == 8) 
        fout << n - 1 << ' ' << n + 8;
    else if (n == 57) 
        fout << n - 8 << ' ' << n + 1;
    else if (n == 64) 
        fout << n - 8 << ' ' << n - 1;
    else if (n % 8 == 0) 
        fout << n - 8 << ' ' << n - 1 << ' ' << n + 8;
    else if(n % 8 == 1)
        fout << n - 8 << ' ' << n + 1 << ' ' << n + 8;
    else if (n >= 2 && n <=7)
        fout << n - 1 << ' ' << n + 1 << ' ' << n + 8;
    else if (n >= 58 && n <=63)
        fout << n - 8 << ' ' << n - 1 << ' ' << n + 1;
    else 
        fout << n - 8 << ' ' << n - 1 << ' ' << n + 1 << ' ' << n + 8;
    fin.close();
    fout.close();
    return 0;
}