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
    multiset<int> se;
    int count_pos = 0,count = 0;
    for(int i = 0; i < s1.size();i++){
        if(s1[i]==s2[i]){
            count_pos++;
        }else{
            se.insert(s1[i]);
        }
    }
    for(int i = 0; i < s2.size(); i++){
        if(se.find(s2[i])!=se.end()){
            se.erase(s2[i]);
            count++;
        }
    }
    cout << count_pos << " " << count;
    
    

    return 0;
}