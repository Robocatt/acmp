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
    string s ="AABBBBAA";
    int n = 0;
    while(n < 1000){
        int x = s.size() * 2;
        for(int i = 1; i < x; i+=2){
            char tmp = s[i - 1];
            string str = "";
            str.push_back(tmp);
            s.insert(i,str);
        }
        while(s.find("AAAAA") != string::npos || s.find("BBBBB") != string::npos){
            if(s.find("AAAAA") != string::npos){
                s = s.replace(s.find("AAAAA"),5,"B");
            }
            if(s.find("BBBBB") != string::npos){
                s = s.replace(s.find("BBBBB"),5,"A");
            }

        }
        n++;
        cout << s << " " << n << endl;
    }

    cout << s;

    return 0;
}