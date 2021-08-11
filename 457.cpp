#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    string n;
    cin >> n;
    int count = 0, ni = stoi(n); 
    
    while(ni != 6174){
        sort(n.begin(),n.end());
        string min = n;
        reverse(n.begin(),n.end());
        string max = n;
        ni = stoi(max) - stoi(min);
        if(ni < 1000){
            n = "0";
            n += to_string(ni);
        }else{
            n = to_string(ni);
        }
        count ++;
    } 
    cout << 6174 << endl << count;

    return 0;
}