#include <fstream>
using namespace std;

int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");
    long long n;
    fin >> n;
    if (n < 3) 
        fout << n;
    else {
        fout << n * (n-1) * (n-2);
    }

    
    fin.close();
    fout.close();
    return 0;
}