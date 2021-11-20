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

bool f(string a, string b){
    int summ = 0;
    for(int i = 0; i < a.size(); i++){
        summ += a[i] - '0';
    }
    int nf,ns;
    if(summ < 10){
        nf = summ;
    }else{
        while(summ > 0){
            nf += summ % 10;
            summ /= 10;
            if(summ == 0 && nf > 9){
                swap(summ,nf);
            }
        }
    }
    summ = 0;
    for(int i = 0; i < b.size(); i++){
        summ += b[i] - '0';
    }
    
    if(summ < 10){
        ns = summ;
    }else{
        while(summ > 0){
            ns += summ % 10;
            summ /= 10;
            if(summ == 0 && ns > 9){
                swap(summ, ns);
            }
        }
    }
    return nf == ns;


}

int main(){
    string s, a, b;
    getline(cin,s);
    if(s.size() == 1){
        cout << "NO";
        return 0;
    }
    for(int i = 1; i < s.size() ; i++){
        a = s.substr(0,i);
        b = s.substr(i, s.size() - i);
        if(f(a,b)){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;

    return 0;
}