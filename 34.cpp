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
#include<stdio.h>
using namespace std;

int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    int n,k,se_size;
    string s;
    scanf("%d %d",&n,&k);
    getline(cin,s);
    //cin >> n >> k >> s;
    set<string> se;
    for(int i = 0; i < s.size() - k + 1; i++){
        se_size = se.size();
        se.insert(s.substr(i,k));
        if(se.size() == se_size){
            printf("YES");
            //cout << "YES";
            return 0;
        }
    }
    //cout << "NO";
    printf("NO");

    return 0;
}