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
string root(string ss, int n){
    string cur = "";
    for (int i = 0; i < n; i++) {
        cur += ss;
    }
    return cur;
}
int main(){
    string s;
    int n;
    cin >> s >> n;
    if(n > 0){
        n--;
        string out = s;
        while(n != 0 && out.size() < 1024){
            out.append(s); 
            n--;
        }
        for(int i = 0; i < min(int(out.size()),1023); i++){
            cout << out[i];
        }
    }else if(n < 0 && (s.size() % -n !=0)){
        cout << "NO SOLUTION";
    }else{
        string d = "";
        for(int i = 0; i < s.size() / abs(n);i++){
            d += s[i];
            if(root(d,-n) == s){
                cout << d << endl;
                return 0;
            }
        }
        cout << "NO SOLUTION";
    }
    

    return 0;
}