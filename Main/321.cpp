#include <iostream>
#include <vector>
#include <set>
#include <string>
using namespace std;

bool f(int n, int i){
    string cur = "", s = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char sym;
    set <char> se;
    while (n > 0){
        sym = s[n % i];
        n /= i;
        se.insert(sym);
        cur += sym;
    }
    return se.size() == cur.size();
}



int main() {

    int n;
    cin >> n;
    for (int i = 2; i <= 36; i++)
        if (f(n, i)) {
            cout << i << " ";
        }

    return 0;
}