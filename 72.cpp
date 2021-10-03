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
    string s1;
    cin >> s1;
    next_permutation(s1.begin(),s1.end());
    cout << s1;



    return 0;
}