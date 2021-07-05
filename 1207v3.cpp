#include <fstream>
#include <vector>
using namespace std;
 

 
int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");
    long long n,k;
    fin >> n >> k;
    vector<int> arr(n);
    for (long long i = 0; i < n; i++){
        long long y;
        fin >> y;
        arr[i] = y;
    }
    vector <long long> sum(n);
    for (int i = 1; i <= n; i++) {
        sum[i] = sum[i - 1] + arr[i];
    }
    vector <long long> pref(n);
    for (int i = k; i <= n; i++) {
        pref[i] = max(pref[i - 1], sum[i] -sum[i - k]);
    }
    vector<long long> suff(n);
    for (int i = n - k ; i >= 1; i--) {
        suff[i] = max(suff[i + 1], sum[i + k - 1] - sum[i - 1]);
    }
    long long best = INT64_MAX;
    for (int i = 1; i <= n - k + 1; i++) {
        best = min(best, max(pref[i - 1], suff[i + k]));
    }
    
    fout << best;
    fin.close();
    fout.close();
    return 0;
}