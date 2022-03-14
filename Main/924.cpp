#include <string>
#include <vector>
#include <fstream>
using namespace std;
int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");
    char n;
    bool f = true;
    vector <vector <char>> arr(4,vector <char> (4));
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++){
        fin >> n;
        arr[i][j] = n;
        }
    }
    for (int i = 0; i < 3; i++) {
        if (f) {
            for (int j = 0; j < 3; j++){
                if (arr[i][j] == arr[i][j+1]) {
                    if (arr[i+1][j] == arr[i+1][j+1] && arr[i+1][j] == arr[i][j]){
                        fout << "No";
                        f = false;
                        break;
                    }
                }
            }
        }else
            break;
    }
    fout << (f ? "Yes" : "");
    fin.close();
    fout.close();
    return 0;
}