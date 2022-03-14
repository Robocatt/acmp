#include <iostream>
#include <vector>
#include <deque>
using namespace std;
int main(){
    long long n,f = 0,s = 0;
    cin >> n;
    deque<long long> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 1; i < n + 1; i++){
        if(i % 2 == 1){
            if(max(arr.front(),arr.back()) == arr.front()){
                f += arr.front();
                arr.pop_front();
            }else{
                f += arr.back();
                arr.pop_back();
            }   
        }else{
            if(max(arr.front(),arr.back()) == arr.front()){
                s += arr.front();
                arr.pop_front();
            }else{
                s += arr.back();
                arr.pop_back();
            } 
        }
    }
    cout<<f<<":"<<s;



    return 0;
}
