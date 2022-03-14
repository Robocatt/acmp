#include<iostream>
#include<string>
#include<algorithm>
using namespace std;





int main(){
    string n;
    cin >> n ;
    sort(n.begin(),n.end());
    do {
        for(int i = 0; i < n.size(); i++){
            cout << n[i];
        }
        cout << endl;
    }while(next_permutation(n.begin(),n.end()));
    return 0;
}