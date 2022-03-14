#include <fstream>
#include <vector>
#include <set>
#include <string>
using namespace std;

int main() {
    vector <set <int>> s;
    int m, n, k, b, c;
    string ss;
    ifstream fin("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");
    fin >> m >> n >> k;
    set <int> a;
    for (int i = 0; i < n; i ++){
        s.push_back(a);
    } 
    for (int i = 0; i < k; i++) {
        fin >> ss; 
        if (ss == "ADD"){ 
            fin >> b >> c; 
            s[c - 1].insert(b); 
        }
        else if (ss == "LISTSET") { 
            fin >> b;
            if (s[b - 1].size() == 0){ 
                fout << -1 << endl; 
            }else{
                for (auto d : s[b - 1]){ 
                    fout << d << " ";
                }
                fout << endl;
            }
        }
        else if (ss == "LISTSETSOF") { 
            fin >> b; 
            int l = 0;
            for (int j = 0; j < n; j++){ 
                if (s[j].count(b) == 1) {
                    fout << j + 1 << " ";
                    l++;
                    }
            }
            if (l == 0){ 
                fout << -1;
            }
            fout << endl;
        }
    }
    fin.close();
    fout.close();
    return 0;
}