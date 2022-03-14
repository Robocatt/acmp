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
    for(int x1 = 0; x1 < 2; x1++){
        for(int x2 = 0; x2 < 2; x2++){
            for(int x3 = 0; x3 < 2; x3++){
                bool a = (x3 || (!x2 && x1));
                bool b = (!x2 || (!x3 && x1));
                bool ab = (a && !b) || (!a && b);
                bool c = (!x2 || (x3 && x1));
                bool d = (!x3 || (x1 && x2));
                bool cd = (c && !d) || (!c && d);
                bool res = ab || cd;
                if(!res){
                    cout << x1 << x2 << x3 << endl;
                }
            }
        }
    }
    

    return 0;
}