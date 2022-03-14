#include <fstream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");
    int n;
    fin >> n;
    fin.ignore();
    vector<string> name;
    vector<int> msk;
    vector<int> spb;
    for (int i = 0; i < n; i++){
        string s;
        getline(fin,s);
        int pos = s.find("\"",1);
        name.push_back(s.substr(1,pos-1));
        int pos2 = s.find(":");
        msk.push_back(stoi(s.substr(pos + 1, pos2 - 1))*3600 + stoi(s.substr(pos2 + 1, s.find(" " - 1, pos2 + 1)))*60);
        int pos3 = s.find(" ",pos2);
        int pos4 = s.find(":",pos2+1);
        spb.push_back(stoi(s.substr(pos3 + 1,pos4 - 1))*3600 + stoi(s.substr(pos4+1))*60);  
    }
    int mini = 0, mindelta = 90000; 
    
    for (int i = 0; i < n; i++) {
        int temp = 0;
        if (spb[i] > msk[i]){
            temp = spb[i]-msk[i];
        }else{
            temp = spb[i] - msk[i] + 24 * 3600;
        }
        if (temp < mindelta){
            mini = i;
            mindelta = temp;
        }
    }
    fout << "The fastest train is \"" << name[mini] <<"\"." << endl;
    fout << "Its speed is " << round(650.0/((double)mindelta/3600)) <<" km/h, approximately."; 


    fin.close();
    fout.close();
    return 0;
}