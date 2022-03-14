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
    int h;
    cin >> h;
    vector<int> order(h);
    for(int i = 0; i < h; i++){
        cin >> order[i];
        order[i]--;
    }
    string s;
    cin >> s;
    vector<string> arr(h);
    int pos = 0;
    for(int i : order){
        int len = s.size() / h;
        if(i < (s.size() % h)){
            len ++;
        }
        arr[i] = s.substr(pos, len);
        pos += len;
    }
    int nn = (s.size() + h - 1) / h;

    for(int j = 0; j < nn; j++){
        for (int i = 0; i < h; i++){
            if( j < arr[i].size()){
                cout << arr[i][j];
            }
        }
    }

    return 0;
}