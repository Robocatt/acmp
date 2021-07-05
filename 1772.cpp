#include <fstream>
#include <vector>
typedef long long ll;
using namespace std;

int s1(int a1,int l){
    int a12 = a1 + a1 + l - 1;
    double a13 = (double) a12 / 2;
    return a13 * l;
}
int sn(int a1, int l, int h){
    int y = s1(a1,l)+(h - 1) * l * h;
    return y;
}
int f(int a1, int l, int h){
    int f1 = s1(a1,l) + sn(a1,l,h);
    double y = f1 / 2 * h;
    return y;
}
ll vertical(int n, int k, int m){
    ll x = f(1,k,n) - f(k + 1,m - k, n);
    return x;
}
ll horizontal(int n, int m, int k){
    return f(1,m,k) - f(1 + k * m, m, n - k);
}
int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");
    int t;
    fin >> t;
    for (int i = 0; i < t; i++){
        ll m, n;
        fin >> n >> m;
        ll l = 0, r = max(n,m) + 1;
        while(r-l>1){
            ll mid = l + (r - l) / 2;
            if (vertical(n,mid,m) >= 0){
                r = mid;
            }else {
                l = mid;
            }
        }
        ll vertm = vertical(n, r, m);
        ll vert = r;
        
        l = 0, r = max(n,m) + 1;
        while(r-l>1){
            ll mid = l + (r - l) / 2;
            if (horizontal(n,m,mid) >= 0){
                r = mid;
            }else {
                l = mid;
            }
        }
        
        
        fout << " ";
    }
     
 
 
    fin.close();
    fout.close();
    return 0;
}