#include <fstream>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
 
int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");
    int n, k;
    fin >> n;
    vector <int> digits;
    for (int i = n; i != 0; i /= 10)
        digits.push_back(i % 10);
    sort(digits.begin(),digits.end());
    k = count(digits.begin(),digits.end(),0);
    if (k != 0) {
        fout << digits[k]; 
        for(int i = 0; i != k; i++)
            fout << 0;
        for (int i = k+1; i != digits.size(); i++)
            fout << digits[i]; 
    }else {
        for (int i = 0; i != digits.size(); i++)
            fout << digits[i]; 
    }
    fout << " ";
    reverse(digits.begin(),digits.end());
    for (int i = 0; i != digits.size(); i++)
        fout << digits[i];  
    fout << " ";
    fin.close();
    fout.close();
    return 0;
}