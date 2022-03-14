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

bool f(int cur_time, bool h, bool m, bool s, int a, int b, char c){
    string time;
    int cur_h = cur_time / b / a;
    int cur_m = (cur_time - cur_h * a * b) / b;
    int cur_s = cur_time - cur_h * a * b - cur_m * b;
    if(h && cur_h < 10){
        time = "0";
    }
    time += to_string(cur_h);
    if(m && cur_m < 10){
        time += "0";
    }
    time += to_string(cur_m);
    if(s && cur_s < 10){
        time += "0";
    }
    time += to_string(cur_s);
    if(time.find(c)!=string::npos){
        return true;
    }
    return false;
}

int main(){
    int a, b, x, y, z;// a min in 1 hour, b sec in 1 min
    cin >> a >> b >> x >> y >> z;
    int h1,h2,m1,m2,s1,s2;
    char c;
    cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2 >> c;
    int start_t = h1 * a * b + m1 * b + s1, end_t = h2 * a * b + m2 * b + s2;
    if(end_t == 0){
        end_t = x * a * b + y * b + z;
    }
    //Новые сутки!
    if(end_t < start_t){
        end_t +=  x * a * b + y * b + z - start_t;
    }
    //
    int count = 0;

    bool h = false,m = false, s = false;
    if(x >= 10){
        h = true;
    }
    if(y >= 10){
        m = true;
    }
    if(z >= 10){
        s = true;
    }

    for(int i = start_t; i < end_t + 1; i++){
        if(i == x * a * b + y * b + z){
            if (f(0,h,m,s,a,b, c)){
                count++;
            }
        }
        else if(f(i, h,m,s,a,b, c)){
            count++;
        }
    }

    cout << count;
    
    

    return 0;
}