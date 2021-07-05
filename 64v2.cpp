#include <fstream>
#include <set>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
vector<bool> getprimes(long long n) {
    vector<bool> primes(n + 1, true);
    primes[0] = primes[1] = false;
    for (long long i = 2; i * i <= n; i++) {
        if (primes[i]) {
            for (long long j = i *i; j <= n; j+= i) {
                primes[j]=false;
            }
        }
    }
    return primes;
}
int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");
    int k;
    fin >> k;
    vector<bool> a;
    vector<int> arr (k);
    for (int i = 0; i < k; i++) {
        int p;
        fin >> p;
        arr[i] = p;
    }
    vector<bool> copy (k);
    int x = 0;
    int g = 0;
    a = getprimes(104730);
    string s = "";
    for (int i = 0; i < a.size(); i++) {
        if (a[i]) {
            s+=to_string(i);
            }
        }
    for(int i = 0; i < k; i++) {
        fout << s[arr[i]-1];
    }
    

    fin.close();
    fout.close();
    return 0;
}