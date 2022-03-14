#include <vector>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");
    int a, n, zero = 0, num = 0;
    fin >> n;
    for (int i = 0; i < n; i++) {
        fin >> a; 
        a == 0 ? zero +=1 : num +=1; 
    }
    
    fout << min(zero,num);
    fin.close();
    fout.close();
    return 0;
}