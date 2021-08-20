#include <iostream>
#include <set>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    multiset<int> se;
    char buffer [33] ;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if (x % 2 == 0){
            itoa (x,buffer,8);
            string s = buffer;
            if (s.size() > 2 && int(s[s.size()-3]) % 2 == 1 ){
                se.insert(x);
            }
        }
    }
    if (se.size() == 0){
        cout << 0;
    }else{
        cout << se.size() << endl;
        for(multiset<int>::iterator i = se.begin(); i != se.end(); i++){
            cout << *i << " ";
        }
    }


}