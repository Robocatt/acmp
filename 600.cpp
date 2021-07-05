#include <fstream>
#include <string>
#include <iostream>
#include <vector>
using namespace std;


int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");
    int n;
    fin >> n;
    for (int i = 0; i < n; i ++) {
        vector<int> arr(3);
        string s;
        fin >> s;
        if (s.size()<3){
            fout << "NO" << endl;
        }else {
            for (int j = 0; j < s.size(); j++) {
                arr[s[j]-48]+=1;
            }
            if(!(arr[0] == arr[1] && arr[1] == arr[2])){
                fout << "NO" << endl;
                continue;
            }else {
                if (s.find("0",arr[0]) == -1 && s.find("1",arr[0]+arr[1]) == -1 && s.find("2",0,arr[0]+arr[1]) == -1){
                    fout << "YES" << endl;
                }else {
                    fout << "NO" << endl;
                }


            }
        }




    }
    
    
    
 
 
    fin.close();
    fout.close();
    return 0;
}