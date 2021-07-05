#include <fstream>
#include <string>
using namespace std;
 
int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");
    int n, k = 1;
    fin >> n;
    string s;
    int i = 1,x;
    while((x = s.find(to_string(n))) == -1){
        s.append(to_string(i));
        i++;
    }
    fout << ++x;
 
 
    fin.close();
    fout.close();
    return 0;
}