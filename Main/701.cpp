#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    string n, m;
    cin >> n >> m;
    int base = n[n.size() - 1] + 2 - '0';
    int b = m.size() - 1,count = 0;
    for(int i = 0; i <m.size(); i++){
        if(m[i] == 'A'){
            count += 10 * pow(base,b);
        }else{
            count += (m[i] - '0') * pow(base,b);
        }b--;
    }
    cout << count;


    return 0;
}