#include <iostream>

using namespace std;

int main(){
    int h1, h2, m1, m2, count = 0;
    cin >> h1 >> m1 >> h2 >> m2;
    while((h1 != h2) || (m1 != m2)){
        if(m1 == 30){
            count ++;
        }
        m1 ++;
        if(m1 == 60){
            m1 = 0;
            h1 ++;
            if(h1 > 12){
                count += h1 - 12;
            }else{
                count += h1;
            }
            if(h1 == 24){
                h1 = 0;
            }
        }
    }
    cout << count;

    return 0;
}