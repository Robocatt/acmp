#include <fstream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");
    int n,temp;
    double x = 0;
    fin >> n;
    string s = "2.7182818284590452353602875", ns;
    if (n == 0)
        fout << '3';
    else {
        n+=1;
        ns.push_back(s[0]);
        ns.push_back(s[1]);
        int i = 2;
        for( ; i <= n; i++)
            ns.push_back(s[i]);
        if( (int) s[i] - '0' >= 5 && (int) s[i] - '0' <=9){
            ns[i-1] = '0' + (int) ns[i-1] + 1 - '0';
        }fout << ns;
    }

    fin.close();
    fout.close();
    return 0;
}
