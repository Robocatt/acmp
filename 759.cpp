#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");
    int n, m, count = 0, value = 0;
    fin >> n >> m;
    vector <int> arr;
    for(int i = 0; i < n; i++) {
        int y;
        fin >> y;
        arr.push_back(y);
    }
    sort(arr.begin(),arr.end());
    reverse(arr.begin(),arr.end());
    for (int i = 0; i < n; i++){
        if (arr[i] > 0 && count<m){
            value+=arr[i];
            count++;
        }else 
        break;
    }
    fout << value;
    fin.close();
    fout.close();
    return 0;
}