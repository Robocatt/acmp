#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool isPrime(long long n){
    bool f = true;
    for(long long j = 2; j*j <= n; j++)
        if((n % j == 0)) {
            f = false; 
            break;
        }
    return f;
}

int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");
    string s,num,revnum;
    vector<char> arr;
    fin >> s;
    for (int i = 0; i < s.size(); i++) {
        arr.push_back(s[i]);
    }
    sort(arr.begin(), arr.end());
    for (int i = 0; i < arr.size(); i++) {
        num.push_back(arr[i]);
    }
    if (isPrime(stoi(num)))
        reverse(arr.begin(),arr.end());
        for (int i = 0; i < arr.size(); i++) {
            revnum.push_back(arr[i]);
        }
        if (isPrime(stoi(revnum)))
            fout << "Yes";
    else 
        fout << "No";
   
    
    fin.close();
    fout.close();
    return 0;
}