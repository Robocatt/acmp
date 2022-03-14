#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double n,p;
    cin >> n >> p;
    cout << fixed << setprecision(9) << 1 / (((100 - p) / 100 / n) + (p / 100));
    return 0;
}