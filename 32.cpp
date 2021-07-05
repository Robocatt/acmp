#include <fstream>
#include <algorithm>
#include <string>
using namespace std;

string zero(string x, bool flag){
    int count = 0;
    while(x[0] == '0'){
        x.erase(0,1);
        count++;
    }
    if (flag){
        reverse(x.begin(),x.end());
        for (int o = 0; o < count; o++){
            x.push_back('0');
        }   
    }else{
        for (int y = 0; y < count; y++){
            x.insert(1,"0");
        }
    }
    return x;
}
int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");
    string a,b;
    fin >> a >> b;
    if (a == "0"){
        sort(b.begin(),b.end()); 
        if (stoll(b)>0){
            b = zero(b,false);
            fout << -stoll(b);
        }else{
            b.erase(0,1);
            b = zero(b,true);
            fout << stoll(b);
        }
    }
    else if (b == "0") {
        sort(a.begin(),a.end());
        if (stol(a)>=0){
            a = zero(a,true);
            fout << stoll(a);
        }else{
            a.erase(0,1);
            a = zero(a,false);
            fout << -stoll(a);
        }
    }else{
        sort(a.begin(),a.end());
        sort(b.begin(),b.end()); 
        if (b[0] == '-') {
            b.erase(0,1);
            if (a[0] == '-'){
                a.erase(0,1);
                if(a[0] != '0' && b[0] != '0'){
                    reverse(b.begin(),b.end());
                }
                if (a[0] == '0'){
                    a = zero(a,false);
                    reverse(b.begin(),b.end());
                }
                if (b[0] == '0'){
                    b = zero(b,true);
                }
                fout << -stoll(a) + stoll(b);
            }else {
                if(a[0] != '0' && b[0] != '0'){
                    reverse(a.begin(),a.end());
                    reverse(b.begin(),b.end());
                }
                if (a[0] == '0'){
                    a = zero(a,true);
                    reverse(b.begin(),b.end());
                }if (b[0] == '0'){
                    b = zero(b,true);
                    reverse(a.begin(),a.end());
                }
                fout << stoll(a) + stoll(b);
            }
        
        }else if (a[0]=='-' && b[0]!='-'){
            a.erase(0,1);
            if (a[0]=='0'){
                a = zero(a,false);
            }
            if (b[0] == '0'){
                b = zero(b,false);
            }
            fout << -stoll(a) - stoll(b);
        }else{
            bool g = true;
            if (a[0] != '0' && b[0] != '0'){  
                reverse(a.begin(),a.end());
            }
            if (a[0] == '0'){
                a = zero(a,true);
                g = false;
            }
            if (b[0] == '0'){
                if (g)
                    reverse(a.begin(),a.end());
                b = zero(b,false);
            }
            fout << stoll(a) - stoll(b);
        }
    }
    fin.close();
    fout.close();
    return 0;
}