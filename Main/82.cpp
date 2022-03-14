#include <stdio.h>
using namespace std;

int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    int arr[100001] = {0};
    for(int i = 0; i < x; i++){
        int temp;
        scanf("%d", &temp); 
        arr[temp] = 1;
    }

    for(int i = 0; i < y; i++){
        int temp;
        scanf("%d", &temp); 
        if(arr[temp] == 1){
            arr[temp] = 2;
        }
    }
    for(int i = 0; i < 100001; i++){
        if(arr[i] == 2){
            printf("%d ", i);
        }
    }

    return 0;
}