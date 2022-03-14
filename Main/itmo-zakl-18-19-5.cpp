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


    
    
    for(int k = 1; k < 10000; k++){
        string s = "AABBAABBAABBAABBAABBAABB", cur = "AABBAABBAABBAABBAABBAABB";
        
        for(int j = 0; j < 15; j++){
            s = cur;
            int cur_pos = s.size();
            for(int i = 0; i < k; i++){
                cur_pos = s.rfind('A', cur_pos - 1);
            }
            s.erase(cur_pos);
            cur.append(s);
        }
        int count = 0;
        for(int i = 0; i < cur.size(); i++){
            if(cur[i] == 'A'){
                count ++;
            }
        }
        //cout << count << endl;
        if(count == 163847){
            cout << "!!!!" << k << endl;
        }
    
    }

    return 0;
}