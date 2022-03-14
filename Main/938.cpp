#include <fstream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(pair<int, int> a, pair<int, int> b){
    return a.second > b.second;
}

int devs(long long n){
    set<long long> dev;
        for (long long i = 2; i * i <= n; i++){
            while (n % i == 0){
                dev.insert(i);
                n/=i;
            }
        }
        if (n != 1 )
            dev.insert(n);
    return dev.size();
}

int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");
    int n;
    fin >> n;
    vector<int> arr;
    vector<int> arrdevs;
    vector<pair<int, int>> arrpair (n);
    for (int i = 0; i < n; i++) {
        int y;   
        fin >> y;
        arrpair[i].first = y;
        arrpair[i].second = devs(y);
    }
    sort(arrpair.begin(),arrpair.end(), comp);
    while(arrpair[arrpair.size()-1].second < arrpair[0].second && arrpair.size() > 1)
        arrpair.pop_back();  
    sort(arrpair.begin(), arrpair.end());

    fout << arrpair[0].first;
    fin.close();
    fout.close();
    return 0;
}