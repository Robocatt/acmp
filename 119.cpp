#include <fstream>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");
    int n;
    fin >> n;
    vector<vector<int> > arr(n,vector <int> (3));
    for (int i = 0; i < n; i++)
        fin >> arr[i][0] >> arr[i][1] >> arr[i][2];
    sort(arr.begin(), arr.end());
    for (int x = 0; x < arr.size(); x++) {
        fout << arr[x][0] << " " << arr[x][1] << " " << arr[x][2] << endl;
    } 
    fout << " ";
    fin.close();
    fout.close();
    return 0;
}