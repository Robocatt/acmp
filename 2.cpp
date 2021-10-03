#include <iostream> 
using namespace std;
int main() {
    int i,n,count = 0;
    cin >> n;
    if (n>0){
        for (i = 1;i <= n; i++) {
            count += i;
        }
    }
    else{
        for (i = 1; i >= n; n++) {
            count += n;
        }
    }
    cout << count;
    return 0;
    }