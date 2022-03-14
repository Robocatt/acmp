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

vector<int> prime(int n){
    vector<int> prime(n + 1, 1);
    prime[0] = prime[1] = 0;
    for(int i = 2; i <= n; i++){
        if(prime[i] == 1){
            if(i * i <= n){
                for(int j = i * i; j <= n; j+= i){
                    prime[j] = 0;
                }
            }
        }
    }
    return prime;
}

int main(){
    int nn;
    cin >> nn;
    if(nn == 1 || nn == 2 || nn == 3){
        cout << 0;
        return 0;
    }
    vector<int> primme = prime(nn);
    vector<int> pr;
    for(int i = 0; i < primme.size(); i++){
        if(primme[i] == 1){
            pr.push_back(i);
        }
    }
    int s = 0;
    int f1 = 0, f2 = pr.size() - 1;
    while(pr[f1] <= nn / 2){
        while(pr[f1] + pr[f2] > nn){
            f2 --;
        }
        if(pr[f1] + pr[f2] == nn){
            s++;
        }
        f1++;
    }
    cout << s;
    

    return 0;
}