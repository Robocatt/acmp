#include <fstream>
#include <vector>
using namespace std;

void gena(int lasta, vector<int>& a, vector<int> b){
    a.push_back(b[lasta-1] + b[lasta-3]);
}
int genb(vector<int>& a,vector<int> b){
    if (a[a.size()-1] > b[b.size() - 1] + 1){
        return b[b.size() - 1] + 1;
    }else {
        gena(a.size(),a,b);
        return b[b.size() - 1] + 2;
    }
}


int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");
    int n;
    fin >> n;
    vector<int> a(6);
    vector<int> b(6);
    a[0]=0;
    a[1]=2;
    a[2]=3;
    a[3]=4;
    a[4]=7;
    a[5]=13;
    b[0]=0;
    b[1]=1;
    b[2]=5;
    b[3]=6;
    b[4]=8;
    b[5]=9;
    if (n<=5){
        fout << a[n] << endl << b[n];
    }else {
        while(a.size() != n +1 ){
            b.push_back(genb(a,b));
        }
        fout << a[n] << endl << b[n];
    }
    




    fin.close();
    fout.close();
    return 0;
}