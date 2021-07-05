#include <fstream>
#include <vector>
using namespace std;
int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    char first[34] = "0", second[34] = "0";
    char *f, *s;
    int count1 = 0, count2 = 0;
    fout.open("OUTPUT.txt");
    int n1, n2, p1, p2;
    fin >> n1 >> p1 >> n2 >> p2;
    ltoa(n1, first, p1);
    ltoa(n2, second, p2);
    int i = 0;
    for (int j = 0; j < 34; j++) {
        if (first[j] == 0)
            break;
        else {
            if(first[j]>='a') 
                count1 += (first[j]-'a'+10);
            else
                count1 += (first[j] - '0');
        }
    }
    for (int j = 0; j < 34; j++) {
        if (second[j] == 0)
            break;
        else {
            if(second[j]>='a') 
                count2 += (second[j]-'a'+10);
            else
                count2 += (second[j] - '0');
        }
    }
    fout << ( count1 == count2 ? count2 : 0);
    fin.close();
    fout.close();
    return 0;
}