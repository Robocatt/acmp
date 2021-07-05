#include <set>
#include <vector>
#include <algorithm>
#include <fstream>
using namespace std;
//D:\\Programming\\cpp\\acmp
int main() {
    ifstream fin("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");
    int n;
    fin >> n;
    for (int i = 0; i < n; i++){
        long long m,m2,min = INT32_MAX,sys;
        fin >> m;
        m2 = m;
        vector<char> ans;
        for(int j = 2; j < 37;j++){
            set<char> se;
            vector<char> arr;
            m = m2;
            while(m != 0){
                m % j >= 10 ? arr.push_back(m%j + 55) : arr.push_back(m%j + 48);
                m/=j;
                se.insert(arr[arr.size()-1]);
            }
            if ( arr.size() + se.size() < min){
                min = arr.size()+se.size();
                reverse(arr.begin(),arr.end());
                ans = arr;
                sys = j;
            }
        } 
        fout << sys << " ";
        for (int h = 0; h < ans.size(); h++){
            fout << ans[h];
        }
        fout << endl;    
    }





    fin.close();
    fout.close();
    return 0;
}