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

int main(){
    string s;
    cin >> s;
    int count = 0;
    if(s.size()==1 || isupper(s[s.size() - 1])){
        cout << "No";
        return 0;
    }
    for(int i = 0; i < s.size(); i++){
        if(islower(s[0])){
            cout << "No";
            return 0;
        }
        if(isupper(s[i])){
            if(count > 4 || count == 1){
                cout << "No";
                return 0;
            }else{
                count = 1;
            }
        }else{
            count++;
        }
    }
    if(count > 4 ){
        cout << "No";
    }else{
        cout << "Yes";
    }

    return 0;
}