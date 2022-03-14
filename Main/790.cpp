#include <fstream>
#include <iostream>
#include <string>
#include <set>
using namespace std;


int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");
    string s;
    char buffer[33] = {0};
    getline(fin, s);
    int first = s.find('/');
    string d = s.substr(0, first);
    int second = s.find('/', first + 1);
    string m = s.substr(first + 1, second - 2);
    string y = s.substr(second + 1);
    itoa (stoi(d),buffer,stoi(d)+1);
    int i = 0;
    while( buffer[i]!= 0 ) {
        fout << (buffer[i] >= 'a' && buffer[i] <='z' ? (char)toupper(buffer[i]) : buffer[i]);
        i++;
    }
    fout << '/';
    i = 0;
    itoa (stoi(m),buffer,stoi(d)+1);
    while( buffer[i]!= 0 ) {
        fout << (buffer[i] >= 'a' && buffer[i] <='z' ? (char)toupper(buffer[i]) : buffer[i]);
        i++;
    }
    fout << '/';
    i = 0;
    itoa (stoi(y),buffer,stoi(d)+1);
    while( buffer[i]!= 0 ) {
        fout << (buffer[i] >= 'a' && buffer[i] <='z' ? (char)toupper(buffer[i]) : buffer[i]);
        i++;
    }
 
 
    fin.close();
    fout.close();
    return 0;
}