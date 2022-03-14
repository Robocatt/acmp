#include <fstream>
#include <set>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


 
int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");
    
    int n,m, count = 0;
    fin >> n >> m;
    while ( m > 2 ){
        m -= 2;
        n += 1;
        count ++;
    }
    while ( n >= 2 ){
        n -= 2;
        count ++;
    }
    if (n == 0){
        if (m == 0)
            fout << count;
        if (m == 1)
            fout << count + 6;
        if (m == 2)
            fout << count + 5;
    }else if (n == 1){
        if (m == 0)
            fout << -1;
        if (m == 1)
            fout << count + 3;
        if (m == 2)
            fout << count + 2;
    }
    
    fin.close();
    fout.close();
    return 0;
}