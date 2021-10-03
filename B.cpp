#include<iostream>

using namespace std;

int main(){
    int n, m, a, b, c;
    cin >> n >> m >> a >> b >> c;
    int tmp = min(((min(n,m) - 1) * 2 * a),((min(n,m) - 1) * 2 * b));
    int ans = (n * m - 1) * c;
    if((min(n,m) - 1) % 2 == 0){
        ans += (min(n,m) - 1) / 2 * a * 2+ (min(n,m) - 1) / 2 * b * 2;
    }else{
        ans += (((min(n,m) - 1) / 2) + 1) * min(a,b) * 2 +  (min(a,b) - 1) / 2 * max(a,b) * 2;
    }
    cout <<  min(ans,tmp + (n * m - 1) * c);
    

    return 0;
}