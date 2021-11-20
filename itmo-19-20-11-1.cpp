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
    long long x = 49022;
    for(int i = 1; i < 1000;i++){
        long long cur = i + x;
        string s;
        while (cur > 0){
            s.push_back(cur % 2 + '0');
            cur /= 2;
        }
        reverse(s.begin(),s.end());
        int count_zero_first = 0;
        bool f = false;
        bool f2 = false;
        for(int j = 0; j < s.size(); j++){
            if(f && f2){
                cout << i;
                break;
            }
            if(s[j] == '0'){
                count_zero_first ++;
            }else{
                if(count_zero_first > 5){
                    f = true;
                    count_zero_first = 0;
                }
                if(count_zero_first > 5 && f){
                    f2 = true;
                }
                count_zero_first = 0;
            }

        }
         if(count_zero_first > 5 && f){
            int y = i;
            vector<int> ans;
            while (y > 0){
                ans.push_back(y % 16 );
                y /= 16;
            }
            reverse(ans.begin(),ans.end());
            for(int i = 0; i < ans.size(); i++){
                cout << ans[i];
            }
            break;
         }

    } 
    

    return 0;
}