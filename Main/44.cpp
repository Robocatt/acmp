#include <fstream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");
    string s;
    fin >> s;
    int temp = 0, count = 0;
   do{
        temp = s.find(">>-->",temp) + 1 ;
        count ++;
    }while (temp!=0);
    if (temp == 0) 
        count --;
    temp = 0;
    do{
        temp = s.find("<--<<",temp) + 1 ;
        count ++;
    }while (temp!=0);
    if (temp == 0) 
        count --;
    fout << count;
    
    fin.close();
    fout.close();
    return 0;
}