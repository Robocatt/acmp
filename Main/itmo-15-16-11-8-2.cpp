#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <set>
#include <math.h>
#include <map>
#include <limits.h>
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <unordered_set>
#include <unordered_map>
#include <sstream>
#include <deque>
#include <time.h>
#include <list>
#include <iomanip>
#include <queue>
#include <cctype>
using namespace std;
typedef long long ll;
ll mod = 1000000007;
#define inf 2000000001
#define infD 200000000001
#define infL -2000000000000000001



int main(){
    int n;
    cin >> n;
    vector<int> vasya(n);
    vector<int> newpetya;
    multiset<int> petyams;
    for (int i = 0; i < n; i++){
        cin >> vasya[i];
    }
    for (int i = 0; i < n; i++){
        int a;
        cin >> a;
        petyams.insert(a);
    }
	sort(vasya.begin(), vasya.end());
    for (int i = 0; i < n; i++){
        multiset<int>::iterator it = petyams.lower_bound(vasya[i]);
        if(it == petyams.end()){
            break;
        }
        newpetya.push_back(*it);
        petyams.erase(it);
    }

	for (multiset<int>::iterator it = petyams.begin(); it!= petyams.end(); it++){
        newpetya.push_back(*it); 
    }
  
    for(int i = 0; i < n; i++){
        cout << vasya[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < n; i++){
        cout << newpetya[i] << " ";
    } 
	
}