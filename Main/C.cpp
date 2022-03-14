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

int f(int i, int j,int n, int m, vector<vector<int>> &arr,vector<vector<bool>> &used,queue<pair<int,int>> &q){
    //added_to_q = 0;
    used[i][j] = true;
    int ans = 0;
    if(!used[i - 1][j] && i - 1 >= 1 ){
        if(i - 1 != 0){
            q.push({i - 1,j});
            //added_to_q++;
        }
        ans += arr[i - 1][j];
        used[i - 1][j] = true;
    }
    if(!used[i + 1][j] && i + 1 <= n){
        if(i + 1 != n + 1){
            q.push({i + 1, j});
            //added_to_q++;
        }
        ans += arr[i + 1][j] ;
        used[i + 1][j] = true;
    }
    if(!used[i][j + 1] && j + 1 <= m){
        if(j + 1 != n + 1){
            q.push({i, j + 1});
            //added_to_q++;
        }
        ans += arr[i][j + 1];
        used[i][j + 1] = true;
    }
    if(!used[i][j - 1] && j >= 1){
        if(j - 1 != 0){
            q.push({i, j - 1});
            //added_to_q++;
        }
        ans += arr[i][j - 1];
        used[i][j - 1] = true;
    }
    return ans;
}


int main(){
    int n,m,k;
    cin >> n >> m >> k;
    vector<vector<int>> arr(n + 2,vector<int> (m + 2,0));
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> arr[i][j];
        }
    }
    int count_max = INT32_MIN, r_max = -1, c_max = -1, p = -1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            int count = arr[i][j];
            queue<pair<int,int>> q;
            vector<vector<bool>> used(n + 2,vector<bool> (m + 2,false));
            int added_to_q_prev = 1,p_mid = 1; //added_to_q = q.size(); 
            q.push({i,j});
            for(int h = 0; h < k - 1; h++){
                if(q.size() == 0){
                    break;
                }
                for(int g = 0; g < added_to_q_prev; g++){
                    pair<int,int> p = q.front();
                    q.pop();
                    count += f(p.first,p.second,n,m,arr,used,q);
                }
                added_to_q_prev = q.size();
                p_mid++;
            }
            if(count_max < count){
                count_max = count;
                r_max = i;
                c_max = j;
                p = p_mid;
            }else if (count_max == count){
                if(p_mid < p){
                    r_max = i;
                    c_max = j;
                    p = p_mid;
                }
            }
        }


        
    }
    

    cout << r_max << " " << c_max << " " << p << " " << count_max;
    

    return 0;
}