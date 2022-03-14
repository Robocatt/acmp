#include <iostream>
#include <string>
#include <vector>
using namespace std;
long long cache[25] = {0};

long long fi (int n){
    if (n <= 1) 
        return n;
    if (cache[n]== 0)
        cache[n] = fi(n - 1) + fi(n - 2); 
    return cache[n]; 
}
int main() {

    string s;
    cin >> s; 
    int a = 0,b = 1;
    fi(24);
    int j = 2;
    for (int i = 1; i < s.size() + 1;i++){
        if(i == cache[j]){
            cout << s[i - 1];
            j++;
        }
    }
    

    return 0;
}