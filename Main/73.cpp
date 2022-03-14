#include <fstream>
#include <string>
#include <vector>
using namespace std;


int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");
    string s;
    fin >> s; 
    vector<int> arr(27);
    vector<char> sign(27);
    int k = 0, l = 0;
    for (char i = '0'; i <= '9'; i++){
        arr[int(i)-48]=k;
        k++;
    }
    for (char i = 'A'; i <= 'Q'; i++){
        arr[int(i)-55] = k;
        k++;
    }
    sign[l] = ' ';
    l++; 
    for (char i = 'a'; i <= 'z'; i++){
        sign[l] = i;
        l++;
    }   
    for (int i = 0; i < s.length(); i++) {
        int p, w;        
        s[i] >='0' && s[i] <='9' ? p = arr[s[i]-48] : p = arr[s[i]-55]; 
        w = ((p - i - 1) % 27 + 27) % 27;
        fout << sign[w];
    }

    fin.close();
    fout.close();
    return 0;
}