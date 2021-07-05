#include <fstream>
#include <vector>
#include <cmath>
using namespace std;
 
double func(long long mid,long long n,vector<long long> l,vector<long long> v){
    double summ=0;
    for(int x = 0; x < n; x++){
        summ+= (double(l[x]) / (double(v[x] + mid)));
    }
    return summ;
}
 
int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");
    long long n, m, q;
    fin >> n;
    vector<long long> v(n);
    vector<long long> l(n);
    for (int i = 0; i < n; i++) {
        long long j;
        fin >> j;
        v[i]=j; 
    }
    for (int i = 0; i < n; i++) {
        long long j;
        fin >> j;
        l[i]=j; 
    }
    fin >> m;
    vector<long long> a(m-1);
    for (int i = 0; i < m-1; i++) {
        long long j;
        fin >> j;
        a[i]=j; 
    }
    if (m == 1) {  
        a.push_back(0);
    }
    vector<long long> f(m);
    for (int i = 0; i < m; i++) {
        long long j;
        fin >> j;
        f[i]=j; 
    }
    fin >> q;
    long long s,t;
    vector<vector<long long>> arr(q);
    for (int i = 0; i < q; i++){
        fin >> s >> t;
        arr[i].push_back(s);
        arr[i].push_back(t);
    }
    for (int i = 0; i < q; i++){
        long long lo = -1;
        long long r = a[a.size()-1] + 1;
        while(r-lo>1){
            long long mid = lo + (r - lo) / 2;
            if (func(mid,n,l,v) >= arr[i][1] - arr[i][0]){
                lo = mid;
            }else
                r = mid;
        }
        if (r <= 0 && a.size() != 1){
            fout << 0 << endl;
        }else if (a.size() == 1 && a[0] == 0){
            if(func(0,n,l,v)> arr[i][1] - arr[i][0]) {
                fout << f[0]<< endl;
            }else {
                fout << 0<< endl;
            }
        }else if (a.size() == 1 ){
            if(func(a[0],n,l,v) > arr[i][1] - arr[i][0]) {
                fout << f[1] << endl;
            }else if(func(0,n,l,v) > arr[i][1] - arr[i][0]){
                fout << f[0] << endl;
            }else{
                fout << 0 << endl;
            }
        }else{
            fout << f[distance(a.begin(),lower_bound(a.begin(),a.end(),r))] << endl;
        }
    }
    fin.close();
    fout.close();
    return 0;
}