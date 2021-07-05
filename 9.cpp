#include <fstream>
#include <vector>
#include <string>

using namespace std;

int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");
    int n, mp = 1,max = INT32_MIN,min = INT32_MAX,maxi = 0,mini = 0, count = 0;
    fin >> n;
    vector<int> arr (n);
    for (int i = 0; i < n; i++) {
        int u;
        fin >> u;
        arr[i] = u;
        if (u > max){
            max = u;
            maxi = i;
        }
        if (u < min){
            min = u;
            mini = i;
        }
    }
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > 0) {
            count +=arr[i]; 
        }
    }

    if (maxi > mini) {
        for (int i = mini + 1; i < maxi; i++) {
            mp*=arr[i];
        }
    }else {
        for (int i = maxi + 1; i < mini; i++) {
            mp*=arr[i];
        }
    }
    fout << count << " " << mp;
    fin.close();
    fout.close();
    return 0;
}