#include<iostream>
#include<iomanip>
#include<vector>
#include<set>
#include<queue>
#include<deque>
#include<map>
#include<algorithm>
#include<cmath>
using namespace std;
int main() {
        int n;
        cin >> n;
        vector<string> arr(n);   
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }
        string a;
        cin >> a;    
        int count = 0;
        for (int i = 0; i < n; i++) {
            int c = 0;
            string b = a;
            for (int j = 0; j < arr[i].size(); j++) {    
                    if (b.find(arr[i][j]) != string::npos){
                        c++;
                        b.erase(b.find(arr[i][j]),1);
                    }
                    else{
                        break; 
                    }
            }
            if (c == arr[i].size()){
                count++; 
            }
       }
       cout << count;
       return 0;
}