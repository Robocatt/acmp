#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
#include<iomanip>


using namespace std;

int main(){
    char c;
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        double maxx = 0;
        int n,m,k;
        double summ = 0;
        cin >> n >> m >> k;
        map<string,vector<int>> companies;
        map<string,pair<double,int>> bought;
        for(int j = 0; j < m; j++){
            string s;
            cin >> s;
            vector<int> arr;
            for(int kk = 0; kk < n; kk++){
                int y;
                cin >> y;
                arr.push_back(y);
            }
            companies[s] = arr;
        }
        for(int kk = 0; kk < k; kk++){
            int day;
            cin >> day;
            string op;
            cin >> op;
            if(op == "buy"){
                int count;
                string comp;
                cin >> count >> comp;
                bought[comp].first += count * companies[comp][day - 1] * 1.01;
                bought[comp].second += count;
            }
            if(op == "sell"){
                string comp;
                cin >> comp;
                summ += bought[comp].second * 0.99 * companies[comp][day - 1] - (bought[comp].first);
                maxx = max(summ,maxx);
                bought[comp] = {};
            }
        }
        maxx = max(summ,maxx);
        cout << maxx << endl;
    }



    return 0;
}