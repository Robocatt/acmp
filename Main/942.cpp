#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;


int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");
    int n, fifth = 0, third = 0, first = 0;
    fin >> n;
    vector <int> arr;
    for(int i = 0; i < n; i++) {
        int a;
        fin >> a;
        arr.push_back(a);
    }
    int j = 0;
    for(int i = arr.size(); i !=0; i--) {
        fifth = fifth + arr[j] * i;
        j++;
    }
    j = 0;
    reverse(arr.begin(),arr.end());
    for(int i = arr.size(); i !=0; i--) {
        third = third + arr[j] * i;
        j++;
    }
    j = 0;
    sort(arr.begin(), arr.end());
    for(int i = arr.size(); i !=0; i--) {
        first = first + arr[j] * i;
        j++;
    }
    if (min(min(first,third),fifth) == first) {
        fout << '1';
    } else if (min(min(first,third),fifth) == third) {
        fout << '3';
    }else 
        fout << '5';
    fin.close();
    fout.close();
    return 0;
}