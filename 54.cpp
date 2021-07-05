#include <fstream>
#include <vector>

using namespace std;

int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");
    int m, n;
    fin >> m >> n;
    vector<int> max;
    vector<int> min;
    vector<vector<int>> arr(m, vector<int> (n));
    for(int i = 0; i < m; i++){
        int mini = INT16_MAX;
        for (int j = 0; j < n; j++){
            int r;
            fin >> r;
            arr[i][j] = r;
            if(r < mini){
                mini = r;
            }
        }
        min.push_back(mini);
    }
    for(int i = 0; i < n; i++){
        int maxi = INT16_MIN;
        for (int j = 0; j < m; j++){
            if (arr[j][i] > maxi){
                maxi = arr[j][i];
            }
        }
        max.push_back(maxi);        
    }
    int temp = INT16_MIN;
    for (int i = 0; i < min.size(); i++) {
        if (min[i]>temp){
            temp = min[i];
        }
    }
    fout << temp<<" ";
    temp = INT16_MAX;
    for (int i = 0; i < max.size(); i++) {
        if (max[i] < temp){
            temp = max[i];
        }
    }
    fout << temp;
    fin.close();
    fout.close();
    return 0;
}
