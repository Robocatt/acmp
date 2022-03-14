#include <fstream>
#include <string>
using namespace std;

void gen(string& s, int k) {
    for (int i = 1; i < k + 1; i++){
        s.append(to_string(i));
    }
} 


 
int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");
    int n, k = 1;
    fin >> n;
    string s;
    while(s.size() < n ){
        gen(s,k);
        k++;
    }
    fout << s[n - 1];
 
 
    fin.close();
    fout.close();
    return 0;
}