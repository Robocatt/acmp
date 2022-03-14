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
    int n;
    cin >> n;
    vector <double> x(n), y(n);
    set <double> se;
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }
    for (int i = 0; i < n - 1;i ++){
        for (int j = i + 1; j < n; j++ ){
            se.insert(sqrt((x[i] - x[j])*(x[i] - x[j]) + (y[i] - y[j])*(y[i] - y[j])));
        }
    }
    cout << se.size() << endl;
    cout << fixed << setprecision(9);
    for (set<double>::iterator it = se.begin(); it != se.end(); it++) {
        cout << *it << endl;
    }
    return 0;
}