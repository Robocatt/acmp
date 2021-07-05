#include <string>
#include <fstream>
using namespace std;
int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");
    string s;
    fin >> s;
    long long odd = 0, even = 0;
    for (int i = 1; i < s.size(); i+=2)
        even = even + (int) s[i] - '0';
    for (int i = 0; i < s.size(); i+=2)
        odd = odd + (int) s[i] - '0';
    fout << ( (even - odd) % 11 == 0 ? "YES" : "NO");
    
    fin.close();
    fout.close();
    return 0;
}