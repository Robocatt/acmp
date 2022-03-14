#include <fstream>
#include <vector>
#include <set>
using namespace std;


int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");
    int n;
    fin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n ; i++) {
        int y;
        fin >> y;
        arr[i] = y;
    }
    int count = 0,round = 0;
    int i = 0;
    while ( round < 9){
        if (arr[i] == 10){
            count+=arr[i]+arr[i+1]+arr[i+2];
            round++;
        }else if (arr[i] + arr[i+1] < 10){
            round++;
            count += arr[i] + arr[i + 1];
            i++;
        }else if (arr[i]+arr[i+1] == 10){
            count += arr[i]+arr[i+1]+arr[i+2];
            round++;
            i++;
        }
        i++;
    }    
    if (arr[i] == 10) {
        count +=arr[i]+arr[i+1]+arr[i+2];
    }else if (arr[i]+arr[i+1] == 10){
            count += arr[i]+arr[i+1]+arr[i+2];
    }
    else {
        count+=arr[i]+arr[i+1];
    }

    fout << count;
    fin.close();
    fout.close();
    return 0;
}