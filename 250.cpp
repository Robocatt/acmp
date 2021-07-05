#include <fstream>
#include <set>
#include <vector>
#include <string>
using namespace std;

int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");
    string n;
    fin >> n;
    string sp = n;
    string sm = n;
    int plus,minus,normal;
    vector<char> arr;
    set<char> se1;
    normal = stoi(n);
    for (int i = 0; i < n.size(); i++) {
        arr.push_back(n[i]);
        se1.insert(n[i]);
    }
    if (se1.size()<=2) {
        fout << n;
    }else {
        bool f = true;
        while(f) {
            se1.clear();
            sp = to_string(stoi(sp) + 1);
            for (int i = 0; i < sp.size(); i++) {
                se1.insert(sp[i]);
            }
            if (se1.size()<=2) {
                plus = stoi(sp);
                f = false;
            }
        }
        f = true;
        while(f) {
            se1.clear();
            sm = to_string(stoi(sm) - 1);
            for (int i = 0; i < sm.size(); i++) {
                se1.insert(sm[i]);
            }
            if (se1.size()<=2) {
                minus = stoi(sm);
                f = false;
            }
        }
        fout << (abs(plus - normal) < abs(minus - normal) ? plus : minus);
    }
    
    fin.close();
    fout.close();
    return 0;
}