#include<iostream>
#include<cmath>


using namespace std;

int main(){
    
    for(int i = 16; i < 10000; i++){
        if(ceil(log2(i/16)) == ceil(log2(i)) * 144 / 208){
            cout << i << " " << log2(i)<< endl;
        }
        
    }
     
    
    
    return 0;
}