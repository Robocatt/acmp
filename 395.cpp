#include <iostream>
#include <string>

using namespace std;
int main(){
    int a, b, count = 0;
    cin >> a >> b;
    for (int i = a; i <= b; i ++){
        string s = to_string(i);
        int num = 1;
        for(int j = 0; j < s.size(); j++){
            num *= (s[j] - 48);
        }
        if (num == 0){
            continue;
        }else if (i % num == 0){
            count ++;
        }
    }
    cout << count;


    return 0;
}