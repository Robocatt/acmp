#include <iostream>


using namespace std;

int main(){
    int n, m, f, l;
    cin >> n >> m >> f >> l;
    cout << -(n - f - m - l) << " " << n - l - f << " " << n - l - m;

    return 0;
}