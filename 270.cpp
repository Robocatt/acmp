#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    cin >> str;
    if(int(str[0]) < 97 || int(str[0]) > 122){
        cout << "Error!";
        return 0;
    }
    bool f = true, g = true;
    for(int i = 0; i < str.size(); i++){
        if(!g){
            if(str[i] < 95 || str[i] > 122 ){
                cout << "Error!";
                return 0;
            }
        }
        if (!f){
            if(str[i] == 95 ){
                cout << "Error!";
                return 0;
            }
        }
        if(g && isupper(str[i])){

            str.insert(i,"_");
            char c = int(str[i + 1]) + 32;
            string s(1,c);
            str.replace(i + 1,1, s);
            f = false;
        }

        if (f && int(str[i]) == 95){
            
            str.erase(i,1);
            char c = int(str[i]) - 32;
            if(c <65 || c > 90){
                cout << "Error!";
                return 0;
            }
            string s(1,c);
            str.replace(i,1,s);
            g = false;
        }
        
    
        
    }
    
    cout << str;


    return 0;
}