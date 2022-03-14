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
    string s1,s2;
    cin >> s1 >> s2;
    if(s1.size() != s2.size()){
        cout << "No";
        return 0;
    }
    multiset<char> se;
    for(int i = 0; i < s1.size();i++){
        s1[i] = tolower(s1[i]);
        s2[i] = tolower(s2[i]);
        se.insert(s1[i]);
    }

    for(int i = 0; i < s1.size(); i++){
        if(se.find(s2[i]) != se.end()){
            se.erase(se.find(s2[i]));
        }else{
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";



    return 0;
}