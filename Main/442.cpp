#define _USE_MATH_DEFINES
#include<iostream>
#include<fstream>
#include<vector>
#include<queue>
#include<deque>
#include<set>
#include<map>
#include<string>
#include<utility>
#include<cmath>
#include<algorithm>
typedef unsigned long long ul;
typedef long long ll;
using namespace std;

void add_size(string mod, vector<int> &sizes){
    if(mod[0] == '+'){
        sizes.push_back(sizes.back() + stoi(mod.substr(1)));
    }else if(mod[0] == '-'){
        sizes.push_back(sizes.back() - stoi(mod.substr(1)));
    }else{
        sizes.push_back(stoi(mod));
    }
}

string rec(string s){
    
}


void count(string s, map<int,int> &mp){
    if(s.find())
}

int main(){
    string s, in;
    vector<int> sizes(1,10);

    while(in != "</HTML>"){
        getline(cin, in);
        s += in;
    }
    while(s.find('\t') != string :: npos ){
        s.erase(s.find('\t'),1);
    }
    while(s.find('\n') != string :: npos ){
        s.erase(s.find('\n'),1);
    }
    map<int,int> mp;
    while(s.find("<font size=") != string::npos){
        int beg = s.find("<font size=");
        bool f = true;
        for(int i = 0; i < beg; i++){
            if(s[i] == '<'){
                f = false;
            }
            if(s[i] == '>'){
                f = true;
            }
            if(f && s[i] != '>' && s[i] != ' '){
                mp[sizes.back()]++;
            }
        }
        s.erase(0,beg);
        string mod = s.substr(12, s.find('>') - 13);
        add_size(mod, sizes);
        int end = s.find("</font>");
        count(s.substr(0, end));

    }


    return 0;
}