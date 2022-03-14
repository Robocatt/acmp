#include <fstream>
#include <vector>
#include <set>
using namespace std;


int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");
    int n = 0;
    fin >> n;
    vector<vector<int>> arr (n*n, vector<int> (n*n));

    bool f = true;
    for (int i = 0; i < n*n; i++) {
        for (int j = 0; j < n*n; j++) {
            int r;
            fin >> r;
            if (r>n*n){
                f = false;
                break;
            }
            arr[i][j] = r;
        }
    }
    if (f){
        for (int i = 0; i < n*n; i++) {
            vector<int> a(100);
        
            for (int j = 0; j < n * n; j++) {
                a[arr[i][j]]=1;
            }
            for(int s = 1; s < n*n; s++){
                if (a[s] == 0) {
                    f = false;
                    break;
                }
            } 
        }
    }
    if (f) {
        for (int i = 0; i < n*n; i++) {
            vector<int> a(100);
            for (int j = 0; j < n * n; j++){
                a[arr[j][i]]=1;
            }
            for(int s = 1; s < n*n; s++){
                if (a[s] == 0) {
                    f = false;
                    break;
                }
            }      
        }
    }
    if (f) {
        for (int l = 1; l <= n; l++) {
            for (int k = 1; k <= n; k++) {
                vector<int> a(100);
                for (int i = (l-1)*n; i < l*n; i++) {
                    for (int j = (k-1)*n; j < k*n ; j++){
                        a[arr[i][j]] = 1;
                    }
                }
                for(int s = 1; s < n*n; s++){
                    if (a[s] == 0) {
                        f = false;
                        break;
                    }
                }
            }   
        }     
    }
    fout << (f ? "Correct" : "Incorrect");



    fin.close();
    fout.close();
    return 0;
}