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
    int count = 0;
    for(long long i = 11; i <=1111111111; i++){
        string s = to_string(i);
        if(s.find('0') == string::npos && s[s.size()-1] == s[s.size()-2]){
            int summ = 0;
            for(int i = 0; i <s.size();i++){
                summ += s[i] - '0';
                if(summ > 10){
                    break;
                }
            }
            if(summ <=10){
                count ++;
                cout << s << endl;
            }
        }
    }
    cout << count;
    

    return 0;
}