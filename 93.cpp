#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main(){
    int n, m;
    cin >> n;
    vector<pair<string,int>> arrp(n);
    for(int i = 0; i < n; i++){
        string temp;
        cin >> temp;
        arrp[i] = {temp,0};
    }
    cin >> m;
    for(int i = 0; i < m; i++){
        string s;
        cin >> s;
        for(int j = 0; j < n; j++){
            int count = 0;
            if(arrp[j].first.size() == s.size()){
                string arr_sort = arrp[j].first;
                for(int k = 0; k < s.size(); k++){
                    if(arr_sort[k] == s[k]){
                        arr_sort[k] = s[k] = '*';
                    }
                }
                sort(s.begin(),s.end());
                sort(arr_sort.begin(),arr_sort.end());
                for(int k = 0; k < s.size(); k++){
                    if(arr_sort[k] != s[k]){
                        count ++;
                    }
                }
            }
            if( count == 1){
                arrp[j].second ++;
            }
            
        }


    }
    for(int i = 0; i < arrp.size(); i++){
        cout << arrp[i].second << " ";
    }

}