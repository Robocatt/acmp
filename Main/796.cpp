#include<iostream>
#include<fstream>
#include<iomanip>
#include<vector>
#include<set>
#include<queue>
#include<deque>
#include<map>
#include<algorithm>
#include<string>
using namespace std;

vector<string> paragraphToWords(vector<char> &text){
    vector<string> words;
    bool f = true;
    for (char c : text){
        if(('0' <= c && c <= '9') || ('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z')){
            if(f){
                words.push_back("");
                f = false;
            }
            words[words.size() - 1].push_back(c);
        }else if(c == ' ' || c == '\n'){
            f = true;
        }else{
            words[words.size() - 1].push_back(c);
            f = true;
        }
    }   
    return words;
}

void print(vector<string> words,  int w,  int b){
    for (int i = 0; i < b; i++){
        cout << " ";
    }
    cout << words[0];
    int len = b + words[0].size();
    for(int i = 1; i < words.size(); i++){
        if(len + 1 + words[i].size() <= w){
            cout << " " << words[i];
            len += 1 + words[i].size();
        }else{
            cout << "\n" << words[i];
            len = words[i].size();
        }
    }
    cout << "\n";
}


int main(){
    ifstream fin("INPUT.txt");
    int w, b;
    fin >> w >> b;
    vector<char> text;
    
    while(true){
        char c = fin.get();
        if(fin.eof()){
            break;
        }
        text.push_back(c);
    }
    fin.close();

    int s = 0;
    while(s < text.size() && text[s] == '\n'){
        s++;
    }
    text.erase(text.begin(),text.begin() + s);
    if(text.empty()){
        return 0;
    }
    while(text.back() == '\n'){
        text.pop_back();
    }

    vector<vector<char>> p(1);
    p[p.size() - 1].push_back(text[0]);
    for(int i = 1; i < text.size(); i++){
        if(text[i] == '\n' && text[i - 1] == '\n'){
            if(!p.back().empty()){
                p.push_back(vector<char>());
            }
        }else{
            p[p.size() - 1].push_back(text[i]);
        }
    }
    for (int i = 0; i < p.size(); i++){
        print(paragraphToWords(p[i]), w, b);
    }
    




    return 0;
}