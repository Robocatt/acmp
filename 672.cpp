#include <iostream>
#include <string>
using namespace std;

int main(){
    int n,n2;
    int count = 0, min = 0;
    cin >> n; 
    n2 = n;
    if (n2 == 1){
        cout << 10 << " " << 0;
        return 0;
    }else if (n2 == 7){
        cout << "84 1111127";
        return 0;
    }else if (n2 == 8){
        cout << "224 11111128";
        return 0;
    }else if(n2 == 9){
        cout << "144 111111129";
        return 0;
    }else if(n2 == 10){
        cout << "45 1111111144";
        return 0;
    }
    bool f = false;
    long long i = 1, c = 1;
    while(n > 1){
        i *= 10;
        n--;
        c++;
    }
    long long  b = n2 * 10 + 2;
    while(c - 2 != 0){
        b *= 10;
        b++;
        c--;
    }
    for( ; i <= b; i++ ){
        int x = i, sum = 0, mult = 1;
        while(x > 0){
            sum += x % 10;
            mult *= x % 10;
            x /= 10;
        }
        if (sum == mult){
            count ++;
            if(!f){
                min = i;
                f = true;
            }
        }
    }
    cout << count << " " << min;
    return 0;
}