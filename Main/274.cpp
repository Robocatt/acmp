#include <fstream>
#include <set>
#include <string>
using namespace std;

int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");
    int k;
    fin >> k;
    for (int i = 0; i < k; i++){
        string s1, s2;
        set<char> se1;
        set<char> se2;
        fin >> s1 >> s2;
        for (int j = 0; j < s1.size(); j++) {
          se1.insert(s1[j]);
        }
        for (int j = 0; j < s2.size(); j++) {
          se2.insert(s2[j]);
        }
        fout << (se1 == se2 ? "YES" : "NO") << endl;

    }
    fin.close();
    fout.close();
    return 0;
}
