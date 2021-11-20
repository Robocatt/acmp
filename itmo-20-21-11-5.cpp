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
        for(int i = 3; i < 30; i++){
        // i - длинна 
        int count = 0;
        for(int k = 1; k < pow(2,i);k++){
            string s = "";
            int div = k;
            for(int l = 0; l < i; l++){
                s = to_string(div % 2) + s;
                div/=2;
            }
            int j = 0;
            bool f;
            while(j + 2 < s.size()){
                int a = s[j] - '0', b = s[j + 1] - '0', c = s[j + 2] - '0';
                f = (!a || !b || c) && (a || !b || !c);
                j++;
                if(!f){
                    break;
                }
            }
            if(f){
                count++;
            }
        }
        if(count + 1 == 611){
            cout << i;
        }
    }
    

    return 0;
}