#include <iostream>
#include <string>
#include <vector>

using namespace std;



int main() {     
    string a, b;
    int l = 0, n = 0, r;        
    vector <int> arr;
    cin >> a >> b;
    while (a != b) {
        n++;
        while (a[l] == b[l]){
            l++;
        }  
        r = a.find(b[l], l);       
        arr.push_back(l);           
        arr.push_back(r);
        for (int i = 0; i <= (r - l) / 2; i++) 
            swap(a[l + i], a[r - i]);
    }
    cout << n << endl;
    if (arr.size() > 0)
        for (int i = 0; i < arr.size() - 1; i += 2) {
            cout << arr[i] + 1 << " " << arr[i + 1] + 1 << endl;
        }

    return 0;

}