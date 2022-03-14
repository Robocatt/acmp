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
    string ssss = "adcbef";
    //do{
        string s = ssss;
        bool f = false;
        for(int i = 1; i <= 300; i++){
            string c1 = s.substr(s.size() / 2, 1);
            string c2 = s.substr((s.size() / 2) - 1,1);
            s = c2 + c1 + s;
            /*
            if(i == 90 && s[0] != 'd'){
                break;
            }
            if(i == 200 && s[0] != 'a'){
                break;
            }
            if(i == 300 && s[0] != 'c'){
                break;
            }
            if(i == 1000 && s[0] != 'b'){
                break;
            }
            if(i > 999){
                f = true;
            }
            */
        }
        //if(f){
            cout << s << endl;
        //}

    //}while(next_permutation(ssss.begin(), ssss.end()));
   
    

    return 0;
}