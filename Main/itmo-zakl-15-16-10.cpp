#define _USE_MATH_DEFINES
#include<iostream>
#include<fstream>
#include<vector>
#include<queue>
#include<deque>
#include<set>
#include<map>
#include<string>
#include<utility>
#include<cmath>
#include<algorithm>
typedef unsigned long long ul;
typedef long long ll;
using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> vec1, vec2;
    long long vec1_sum = 0, vec2_sum = 0;
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        if(b == 1){
            vec1.push_back(a);
            vec1_sum+=a;
        }else{
            vec2.push_back(a);
            vec2_sum += a;
        }
    }
    long long minn_dif = abs(vec2_sum - vec1_sum);
    for(int i = 0; i < vec1.size(); i++){
        for(int j = 0; j < vec1.size(); j++){
            if(i == j){
                minn_dif = min(minn_dif, abs(vec2_sum + 2 * vec1[i]  - vec1_sum ));
            }else{
                minn_dif = min(minn_dif, abs(vec2_sum + 2 * vec1[i] + 2 * vec1[j] - vec1_sum));
            }
        }
    }
    for(int i = 0; i < vec2.size(); i++){
        for(int j = 0; j < vec2.size(); j++){
            if(i == j){
                minn_dif = min(minn_dif, abs(vec1_sum + 2 * vec2[i]  - vec2_sum ));
            }else{
                minn_dif = min(minn_dif, abs(vec1_sum + 2 * vec2[i] + 2 * vec2[j] - vec2_sum));
            }
        }
    }
    cout << minn_dif;
    return 0;
}