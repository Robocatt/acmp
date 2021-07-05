#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");
    int k,n,mp = 0, summ = 0;
    fin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        int q;
        fin >> q;
        arr[i] = q;
        q > mp ? mp = q : mp;
        summ+=q;
    }
    fin >> k;
    int l = mp - 1;
    int r = INT16_MAX;
    while (r - l >1) {
        int cv = 0, lv = 0;
        int m = l + (r - l) / 2;
        for(int i = 0; i < arr.size(); i++) {
            if (lv + arr[i] <= m){
                lv +=arr[i];
            }else{
                cv++;
                lv = arr[i];
            }
        }
        cv++;
        if(cv <= k){
            r = m;
        }else{
            l = m;
        }    
    }
    fout << r;


    fin.close();
    fout.close();
    return 0;
}