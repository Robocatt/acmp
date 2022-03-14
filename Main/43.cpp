#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin >> s;
    int count = 0,ans = 0;
    for (int i = 0; i < s.size(); i++){
        if(s[i] == '0'){
            count = 1;
            i++;
            while(s[i] == '0'){
                count ++;
                i++;
            }
            if(count > ans){
                ans = count;
            }
        }
    }
    cout << ans;

    return 0;
}