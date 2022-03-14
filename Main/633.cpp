#include <fstream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");
    string name1, temp;
    vector <string> arr(3);
    getline(fin,name1);
    for(int i = 0; i < 3; i++){
        fin >> temp;
        arr[i] = temp;
    }
    sort(arr.begin(),arr.end());
    fout << name1 << ": " << arr[0] <<", " << arr[1]<<", "<< arr[2];



    fin.close();
    fout.close();
    return 0;
}
