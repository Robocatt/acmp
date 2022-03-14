#include <fstream>
#include <set>
#include <vector>
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
    int n, m;
    fin >> m >> n;
    vector<bool> a;
    vector<int> array;

    a = getprimes(n);
    for (int i = m ; i < a.size(); i++) {
        if (a[i]) {
            array.push_back( i );
            }
        }
    if (array.size() == 0) 
        fout << "Absent";
    else 
        for (int i =0; i < array.size(); i++) {
            fout << array[i] << endl;
        }
    
    

    fin.close();
    fout.close();
    return 0;
}