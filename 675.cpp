#include <algorithm>
#include <vector>
#include <fstream>
using namespace std;
int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");
    int n, m,count = 0;
    bool f = true;
    char c;
    fin >> n >> m;
    vector <vector <char>> arr(n,vector <char> (m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++){
        fin >> c;
        arr[i][j] = c;
        }
    }
    int j = 0;
    while(f){
        for (j = 0; j < n; j++) {
            if (* (find(arr[j].begin(), arr[j].end(),'B') - 1) =='.') 
                * (find(arr[j].begin(), arr[j].end(),'B') - 1) = 'B';
            else if (* (find(arr[j].begin(), arr[j].end(),'B') - 1) !='.') {
                f = false;
                break;
            }
        }
        if (j == n ) {
            count ++;
        }
    }
    fout << count;
    fin.close();
    fout.close();
    return 0;
}