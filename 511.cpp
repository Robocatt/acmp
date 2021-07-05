#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");
    int b, d, a, c;
    char ch1, ch2,tmp;
    fin >> ch1 >> b >> tmp >> ch2 >> d;
    if (b >= 1 && b <= 8 && d >= 1 && d <= 8 && ch1 >= 'A' && ch1 <='H' && ch2 >= 'A' && ch2 <='H'){
        a = ch1 - 'A';
        c = ch2 - 'A';
        fout << ( ( (c-a)*(c-a) + (d-b)*(d-b) )==5 ? "YES" : "NO");
    }else 
        fout << "ERROR";


    fin.close();
    
    fout.close();
    return 0;
}