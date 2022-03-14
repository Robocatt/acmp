#include<iostream>
#include<iomanip>
#include<vector>
#include<set>
#include<queue>
#include<deque>
#include<map>
#include<algorithm>
#include<cmath>
#include<string>
using namespace std;

int main(){
 int n, l;
    cin >> n;
    l = n / 4;
    if (n % 4 > 0){
        l++;
    }
    for (int i = 0; i < l; i++)
        for (int x = 0; x < 2; x++) {
            cout << i + 1 << " " << x + 1 << " ";
            if (x == 0){
                if ((4 * l - 2 * i) > n){
                    cout << 0 << " ";
                }else{
                    cout << 4 * l - 2 * i << " ";
                }
            }else if ((i + 1) * 2 > n){
                cout << 0 << " ";
                }else{
                    cout << (i + 1) * 2 << " ";
                }
            if (x == 0){
                if (2 * i + 1 > n){
                    cout << 0 << endl;
                }else{ 
                    cout << (2 * i + 1) << endl;
                }
            }else if ((4 * l - 2 * i - 1) > n){
                cout << 0 << endl;
                }else{ 
                cout << 4 * l - 2 * i - 1 << endl;
                }
        }
       return 0;
}