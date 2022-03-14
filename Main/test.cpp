#include<iostream>
#include<fstream>
#include<iomanip>
#include<vector>
#include<set>
#include<queue>
#include<deque>
#include<map>
#include<algorithm>
#include<stdio.h>
#include<string>
using namespace std;
vector<string> paragraphToWords( vector<char> &text){
    vector<string> words;
    bool newword = true;
    for (char c : text){
        if(('0' <= c && c <= '9') || ('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z')){
            if(newword){
                words.push_back("");
                newword = false;
            }
            words.back().push_back(c);
        }else if(c == ' ' || c == '\n'){
            newword = true;
        }else{
            words.back().push_back(c);
            newword = true;
        }
    }   
    return words;
}

void printparagraph(vector<string> words,  int maxlen,  int indent){
    for (int i = 0; i < indent; i++){
        cout << " ";
    }
    cout << words[0];
    int linelen = indent + words[0].size();
    for(int i = 1; i < words.size(); i++){
        if(linelen + 1 + words[i].size() <= maxlen){
            cout << " " << words[i];
            linelen += 1 + words[i].size();
        }else{
            cout << "\n" << words[i];
            linelen = words[i].size();
        }
    }
    cout << "\n";
}


int main(){
    ifstream fin("INPUT.txt");
    int maxlen, indent;
    fin >> maxlen >> indent;
    vector<char> text;
    while(true){
        char c;
        c = fin.get();
        if(fin.eof()){
            break;
        }
        text.push_back(char(c));
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

    vector<vector<char>> paragraphs(1);
    paragraphs[paragraphs.size() - 1].push_back(text[0]);
    for(int i = 1; i < text.size(); i++){
        if(text[i] == '\n' && text[i - 1] == '\n'){
            if(!paragraphs.back().empty()){
                paragraphs.push_back(vector<char>());
            }
        }else{
            paragraphs[paragraphs.size() - 1].push_back(text[i]);
        }
    }
    for (int i = 0; i < paragraphs.size(); i++){
        printparagraph(paragraphToWords(paragraphs[i]), maxlen, indent);
    }
    




    return 0;
}