#include<iostream>
#include<iomanip>
#include<vector>
#include<set>
#include<queue>
#include<deque>
#include<map>
#include<algorithm>
#include<cmath>
#include<string>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<string> table(n), bfirst(n + 1), wfirst(n + 1);
    for(int i = 0; i < n; i++){
        cin >> table[i];
    }
    
    for (int i = 0; i < n; i += 2) {
        bfirst[i] = "";
        wfirst[i] = "";
        for (int j = 0; j < m / 2 + 1; j++) {
            bfirst[i] = bfirst[i] + "BW";
            bfirst[i + 1] = bfirst[i + 1] + "WB";
            wfirst[i] = wfirst[i] + "WB";
            wfirst[i + 1] = wfirst[i + 1] + "BW";
        }
    }
    int s1 = 0, s2 = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if(bfirst[i][j] == table[i][j]){
                bfirst[i][j] = '1';
            }else{
                bfirst[i][j] = '0';
                s1++;
            }
            if(wfirst[i][j] == table[i][j]){
                wfirst[i][j] = '1';
            }else{
                wfirst[i][j] = '0';
                s2++;
            }
        }
    }

    if (s1 < s2) {
        cout << s1 << endl;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (bfirst[i][j] == '0'){
                    cout << i + 1 << " " << j + 1 << endl;
                }
            }
        }
       }
    else{
        cout << s2 << endl;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (wfirst[i][j] == '0'){ 
                    cout << i + 1 << " " << j + 1 << endl;
                }
            }
        }
    }



    return 0;
}