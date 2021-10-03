#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int a, b, c, i = 0;
    char op;
    if(s.size() < 5){
        cout << "ERROR";
        return 0;
    }

    if(s[0]=='-'){
        i++;
        while(isdigit(s[i])){
            i++;
        }
        
        try{
            a=-1*stoi(s.substr(1,i+1));
        }catch (const std::invalid_argument){
            cout << "ERROR";
            return 0;
        } 
    }else if (isdigit(s[i])){
        while(isdigit(s[i])){
            i++;
        }
        
        try{
            a=stoi(s.substr(0,i+1));
        }catch (const std::invalid_argument){
            cout << "ERROR";
            return 0;
        } 
        
    }else{
        cout << "ERROR";
        return 0;
    }
    op = s[i];
    int char_num = i;
    i++;

    if(s[i]=='-'){
        i++;
        while(isdigit(s[i])){
            i++;
        }
        try{
            b=stoi(s.substr(char_num + 1,i));
        }catch (const std::invalid_argument){
            cout << "ERROR";
            return 0;
        } 
        
    }else if (isdigit(s[i])){
        while(isdigit(s[i])){
            i++;
        }

        try{
            b= stoi(s.substr(char_num + 1,i));
        }catch (const std::invalid_argument){
            cout << "ERROR";
            return 0;
        } 
        

    }else{
        cout << "ERROR";
        return 0;
    }



    if(s[i] != '='){
        cout << "ERROR";
        return 0;
    }
    try{
        if(!isdigit(s[i+1]) && s[i+1] != '-'){
            cout << "ERROR";
            return 0;
        }
        for(int j = i + 1; j < s.size();j++){
            if(j == i + 1 && s[j] == '-'){
                continue;
            }
            if(!isdigit(s[j]) ){
                cout << "ERROR";
                return 0;
            }
        }
        c = stoi(s.substr(i+1));
    }catch (const std::invalid_argument){
        cout << "ERROR";
        return 0;
    } 
    //cout << a << ' ' << b << ' ' << c << endl;

    if(op == '+'){
        if(a + b == c){
            cout << "YES";
        }else{
            cout << "NO";
        }
    }else if(op == '-'){
        if(a - b == c){
            cout << "YES";
        }else{
            cout << "NO";
        }
    }else if(op == '*'){
        if(a * b == c){
            cout << "YES";
        }else{
            cout << "NO";
        }
    }else if(op == '/'){
        if(b == 0){
            cout << "NO";
        }
        else if((double)a / b == (double)c){
            cout << "YES";
        }else{
            cout << "NO";
        }
    }else{
        cout << "ERROR";
    }



    return 0;
}