#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");
    int m,m2;
    fin >> m;
    m2 = m;
    vector<int> sys;
    for(int j = 2; j < 37;j++){
        vector<char> arr;
        m = m2;
        while(m != 0){
            m % j >= 10 ? arr.push_back(m%j + 55) : arr.push_back(m%j + 48);
            m/=j;
        }
        reverse(arr.begin(),arr.end());
        bool f = true;
        for(int i = 0; i < arr.size() / 2; i++){
            if (arr[i] != arr[arr.size()-i-1]){
                f = false;
                break;
            } 
        }
        if (f){
            sys.push_back(j);
        }
    } 
    if (sys.size() == 0){
        fout << "none";
    }else if (sys.size() == 1){
        fout << "unique" << endl << sys[0];
    }else {
        fout << "multiple" << endl;
        for (int i = 0; i < sys.size(); i++){
            fout << sys[i] << " ";
        }
    }
   
    fin.close();
    fout.close();
    return 0;
}