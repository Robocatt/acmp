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
bool comp(int a, int b){
    return a > b;
}

int main(){
    vector<int> girls,boy;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int m, height;
        cin >> m >> height;
        if(m == 0){
            boy.push_back(height);
        }else{
            girls.push_back(height);
        }
    }
    sort(boy.begin(),boy.end(),comp);
    sort(girls.begin(),girls.end(),comp);
    boy.insert(boy.end(),girls.begin(),girls.end());
    int maxx = INT16_MIN;
    for(int i = 1; i < boy.size(); i++){
        maxx = max(maxx, abs(boy[i] - boy[i - 1]));
    }

    cout << maxx;

    return 0;
}