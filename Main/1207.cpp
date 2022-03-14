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
    for (int i = 0; i < n; i++){
        int y;
        fin >> y;
        arr[i] = y;
    }
    vector<int> summ(n);
    for (int i = 1; i <= n; i++) {
        summ[i] = summ[i - 1] + arr[i];
    }
    vector<int> pref(n);
    for (int i = k; i <= n; i++) {
        pref[i] = max(pref[i -1], summ[i] -summ[i - k]);
    }
    vector<int> suff(n);
    for (int i = n -k +1; i >= 1; i--) {
        suff[i] = max(suff[i + 1], summ[i + k - 1] -summ[i - 1]);
    }
    long long best = INT64_MAX;
    for (int i = 1; i <= n - k + 1; i++) {
        long long temp =  max(pref[i - 1], suff[i + k]);
        best = min(best,temp);
    }
    fout << best;
    fin.close();
    fout.close();
    return 0;
}