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
    int n, k;
    cin >> n >> k;
    vector<int> num;
    while(n > 0){
        num.push_back(n % k);
        n /= k;
    }
    int mul = 1, sum = 0;
    for(int i = 0; i < num.size(); i++){
        mul *= num[i];
        sum += num[i];
    }
    cout << mul - sum;

    return 0;
}