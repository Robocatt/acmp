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

bool comp (pair<int,int> a, pair<int,int> b){
    return a.second < b.second;
}

int main(){
    int n;
    const int inf = 1000000000;
    cin >> n;
    vector<int> arr;
    vector<int> sample;
    for(int i = 0; i < n; i++){
        int year;
        cin >> year;
        sample.push_back(year);
    }
    arr = sample;


    
    vector<int> d (n, inf);
    vector<int> p (n + 1, 0);
    d[0] = 0;
    p[0] = 0;
    for(int i = 0; i < n; i++){
        if(d[i] > arr[i]){
            d[i] = arr[i];
            p[i] = d[i - 1];
        }
    }

    if(d[3] == inf || sample[sample.size() - 1] == sample[sample.size() - 2]){
        cout << 0;//
        return 0;
    }

    int k = n - 1;
    while(sample[k] != d[3]){
        k--;
    }
    int j = k - 1;
    while(sample[j] != p[3]){
        j--;
    }
    int i = j - 1;
    while(sample[i] >= sample[j]){
        i--;
    }
    cout << i + 1 << " " << j + 1 << " " << k + 1;
    return 0;
}