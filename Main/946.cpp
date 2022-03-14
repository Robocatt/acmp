#include <deque>
#include <iostream>
using namespace std;


int main(){
    int n;
    cin >> n;
    deque<int> dq;
    for(int i = 0; i < n; i++){
        int x,y;
        cin >> x;
        if (x == 1 ){
            cin >> y;
            dq.push_front(y);
        }else if (x == 2){
            cin >> y;
            dq.push_back(y);
        }else if ( x == 3){
            cout << dq[0] << " ";
            dq.pop_front();
        }else{
            cout << dq[dq.size()-1] << " ";
            dq.pop_back();
        }
    }
    return 0;
}