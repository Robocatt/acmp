#include <fstream>
#include <vector>
using namespace std;


int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");
    int n;
    int s = 0;
    fin >> n;
    vector <int> arr;
    for(int i = 0; i < n; i++) {
        int y;
        fin >> y;
        arr.push_back(y);
    }
    arr.push_back(arr[0]);
    arr.push_back(arr[1]);
    for (int i = 1; i < n+1; i++){
        if ( s < arr[i-1] + arr[i] + arr[i+1] )
            s = arr[i-1] + arr[i] + arr[i+1];
    }
    fout << s;
    fin.close();
    fout.close();
    return 0;
}