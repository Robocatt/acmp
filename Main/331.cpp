#include <vector>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");
    int h1, m1, h, m;
    char c;
    fin >> h1 >> c >> m1 >> h >> m;
    h1+=h;
    m1+=m;
    if (m1 >= 60) {
        m1-=60;
        h1+=1;
    }
    h1 %=24;
    if (h1<=9 && m1 <=9)
        fout << '0' << h1 << ':' << '0' << m1;
    else if (h1<=9)
        fout << '0' << h1 << ':' << m1;
    else if (m1<=9)
        fout << h1 << ':' << '0'<< m1;
    else 
        fout << h1 << ":" << m1;


    fin.close();
    fout.close();
    return 0;
}