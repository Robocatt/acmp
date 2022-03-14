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

int f(deque<int> arr){
    int x = arr.size() - 1, res = 0;
    for(int i = 0; i < arr.size(); i++){
        res += pow(2,x) * arr[i];
        x--;
    }
    return res;
}


int main(){
    int n,max = n;
    cin >> n;
    if(n == 0){
        cout << 0;
        return 0;
    }
    deque<int> de,base;
    while(n > 0){
        de.push_back( n % 2);
        n /= 2;
    }
    reverse(de.begin(),de.end());
    base = de;
    do{
        int x = de[de.size()-1];
        de.pop_back();
        de.push_front(x);
        int y = f(de);
        max = (y > max ? y : max);

    }while(de != base);




    cout << max;
    return 0;
}