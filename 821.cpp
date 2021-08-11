#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");
       int n;
       fin >> n;
       int a[21][21];
       string s="";
       fin >> s;
       int c = 1;
       for (int z = 1; z <= n; z++){
            for (int x = 1; x <= n; x++){
                a[z][x] = c++;
            }
        }
       a[n][n] = 0;
       int h = 0; 
       int x = n, y = n; 
       for (int i = 0; i < s.size(); i++) {
            h++;
            if(s[i]=='U'){
                if (x == 1){
                    fout << "ERROR " << h; 
                    return 0; 
                }else{
                    swap(a[x][y], a[x - 1][y]);
                    x--;
                }
            }
            if (s[i] == 'R'){
                if (y == n){
                    fout << "ERROR " << h;
                    return 0;
                }else{
                    swap(a[x][y], a[x][y + 1]);
                    y++;
                }
            } 
            if (s[i] == 'L'){ 
                if (y == 1){
                    fout << "ERROR " << h;
                    return 0;
                }else{
                    swap(a[x][y], a[x][y - 1]);
                    y--;
                }
            }
            if(s[i] == 'D') {
                if (x == n){
                    fout << "ERROR " << h;
                    return 0;
                }else{
                    swap(a[x][y], a[x + 1][y]);
                    x++;
                }
            }
       }
       for (int i = 1; i <= n; i++) {
            for (int x = 1; x <= n; x++)
                fout << a[i][x] << " ";
            fout << endl;
       }
    fin.close();
    fout.close();
    return 0;
}