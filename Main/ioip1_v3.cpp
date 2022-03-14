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
    vector<int> arr = {6,3,9,2,4};
    int k = 2;
    int s = arr.size() - 1;
    long long ans = -1;
    for(int i = 1; i < 2 * k + 1; i++){
            for(int kk = 0; kk <= s; kk++){
                long long mp = 1;
                int c = 0;
                for(int j = kk; j < min(i,s); j++){
                    mp *= arr[j];
                    c++;
                }
                for(int j = k + c; j < arr.size(); j++){
                    mp += arr[j];
                }
                ans = max(ans, mp);
        }
    }
    cout << ans;

    return 0;
}