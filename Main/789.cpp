#include <iostream>
#include <vector>
#include <queue>
#include <set>
using namespace std;
typedef unsigned long long ull;

 
int main(){
    int n;
    cin >> n;
    set<ull> se;
    se.insert(1);
    set<ull> q;
    q.insert(1);
    while ( se.size() <= n || *q.begin() < n){
        ull cur = (*q.begin());
        q.erase(q.begin());
        se.insert(cur * 2);
        se.insert(cur * 3);
        se.insert(cur * 5);
        q.insert(cur * 2);
        q.insert(cur * 3);
        q.insert(cur * 5);
    }
    set<ull>::iterator it = se.begin();
    advance(it, n - 1);

    cout << *it;


 
    return 0;
}