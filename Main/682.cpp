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
    int n;
    cin >> n;
    if (n == 1){
        cout << 45;
        return 0;
    }else if (n == 2){
        cout << 4905;
        return 0;
    }else if (n == 3){
        cout << 494550;
        return 0;
    }else{
    string s ="49495500";
    while(n - 4 > 0){
        s.insert(s.find('9',2),"9");
        s+='0';
        n--;
    }
    cout << s;
    }

    return 0;
}