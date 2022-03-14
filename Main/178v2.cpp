#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
using namespace std;



int main(){
    int n;
    cin >> n; 
    map<int,int> mp;
    vector<int> base;
    vector<vector<int>> a(n,vector<int>(1));
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        base.push_back(x);
        a[x][0] ++;
    }
    int max = INT32_MIN;
    int maxi = - 1;
    for (int i = 0; i < a.size(); i++){
        if(a[i][0] > max){
            max = a[i][0];
            maxi = i;
        }
        else if(a[i][0] == max && a[i][0] < a[maxi][0]){
            max = a[1][i];
            maxi = i;
        }
    }

    while(count(base.begin(),base.end(),maxi) > 0){
        base.erase(find(base.begin(),base.end(),maxi));
    }
    for(int i = 0; i < base.size(); i++){
        cout << base[i] << " ";
    }
    for(int i = 0; i < max; i++){
        cout << maxi << " ";
    }

    return 0;
}
