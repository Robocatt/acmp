#include <fstream>
#include <set>
#include <vector>
#include <string>
using namespace std;

int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");
    int n, count = 0;
    fin >> n;
    vector<int> arr1;
    int i = 1;
    while (arr1.size()!=n) {
        set<int> temp;
        for (int j = 0; j < to_string(i).size(); j++){
            temp.insert(to_string(i)[j]);
        }
        if (temp.size() == to_string(i).size())
            arr1.push_back(i);
        i++;
    }
    fout << arr1[n-1];
    
    fin.close();
    fout.close();
    return 0;
}