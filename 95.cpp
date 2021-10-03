#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    cin >> s;
    unsigned long long iter = 0;
    while(s.size() > 1){
        unsigned long long count_num = 0;
        for(int i = 0; i < s.size(); i++){
            count_num += s[i] - '0';
        }
        iter ++;
        s = to_string(count_num);
    }
    cout << s << " " << iter;
    return 0;
}