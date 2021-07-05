#include <fstream>
#include <set>
#include <vector>
using namespace std;

int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");
    int m, n;
    fin >> m >> n;
    set<int> se1;
    set<int> se2;
    vector<int> arr1;
    vector<int> arr2;
    for (int i = 0; i < m; i++) {
        int temp;
        fin >> temp;
        arr1.push_back(temp);
    }
    for (int i = 0; i < n; i++) {
        int temp;
        fin >> temp;
        arr2.push_back(temp);
    }
    for (int j = 0; j < arr1.size(); j++) {
        se1.insert(arr1[j]);
    }
    for (int j = 0; j < arr2.size(); j++) {
        se2.insert(arr2[j]);
    }
    fout << (se1 == se2 ? "1" : "0") << endl;
    
    fin.close();
    fout.close();
    return 0;
}