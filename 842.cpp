#include <fstream>
using namespace std;
int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");
    long long n;
    fin >> n; 
    while(n % 2 == 0) {
        n = n/2; 
    }
    while(n % 5 == 0) {
        n = n/5;  
    }
    fout << (n > 1 ? "YES" : "NO"); 
    fin.close();
    fout.close();
    return 0;
}