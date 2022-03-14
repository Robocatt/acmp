#include<stdio.h>
using namespace std;
int main(){
    for(int x0 = 0; x0 < 50; x0++){
        int x1 = x0 + 1;
        int x2 = 5;
        int i;
        for (i = 1; i <= 3; i++) {
            int x = x1 * 2 + x2;
            x1 = x2;
            x2 = x;
        }
        if(x2 == 43){
            printf("%d", x0);
        }
    }


}