#include<string>
#include<vector>
#include<set>
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    set<char> se;
    vector<long long> arr(1,0);
    se.insert(0);
    for(int i = 0; i < n - 1; i++){
        long long j = arr[arr.size()-1] + 1;
        while(true){
            bool f = true;
            string s = to_string(j);
            for(set<char>::iterator it = se.begin(); it != se.end(); it ++){
                if(s.find(*it) != string::npos ){
                    f = false;
                }
            }
            if(f){
                se.clear();
                for(int k = 0; k < s.size();k++){
                    se.insert(char(s[k]));
                }
                break;
            }
        j++;
        }
        cout << j << endl;
        arr.push_back(j);
    }

    cout << arr[arr.size()-1];

}