#include <fstream>
#include <vector>
#include <string>

using namespace std;


int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");
    string s = "";
    long long n = 0;
    fin >> n;
    vector<long long> dev;
    for (long long i = 2; i * i <= n; i++){
        while (n % i == 0){
            dev.push_back(i);
            n/=i;
        }
    }
    if (n != 1 )
        dev.push_back(n);
    
    if(dev.size() == 1) 
        fout << dev[0];
    else {
        for (int i = 0; i < dev.size(); i++) {
            if (i!= dev.size()-1)
                fout << dev[i] << "*";
            else 
                fout << dev[i];
        }
    }
   
    
    fout << s;
    fin.close();
    fout.close();
    return 0;
}