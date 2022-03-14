#include <fstream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;
unsigned long long cache[100] = {0};

unsigned long long fact (int n){
    if (n <= 1) 
        return n;
    if (cache[n]== 0)
        cache[n] = fact(n - 1) * n; 
    return cache[n]; 
}

int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");
    vector<unsigned long long> arr;
    int n,m;
    fin >> n >> m; 
    for (int i = 0; i < n; i++) {
        unsigned long long fact = fact(k);
        unsigned long long mp = pow(2,k);
        arr.push_back(fact % m + mp % m);
    }



    fin.close();
    fout.close();
    return 0;
}