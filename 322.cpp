#include <fstream>
#include <string>
#include <vector>
using namespace std;
long long cache[25] = {0};

long long fi (int n){
    if (n <= 1) 
        return n;
    if (cache[n]== 0)
        cache[n] = fi(n - 1) + fi(n - 2); 
    return cache[n]; 
}
int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");
    string s;
    fin >> s; 
    int a = 0,b = 1;
    fi(24);
    int k = s.size();
    int l = 1;
    int r = 24;
    while(r-l>1){
        int m = l + (r - l) / 2;
        if (cache[m] >= s.size()){
            r = m;
        }else 
            l = m;
    }
    if (!(l < s.size()))
        l++;
    for (int i = 2; i <= l; i++){
        int x = cache[i];
        fout << s[cache[i]-1];
    }

    fin.close();
    fout.close();
    return 0;
}