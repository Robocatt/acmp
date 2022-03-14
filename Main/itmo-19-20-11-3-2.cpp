#define _USE_MATH_DEFINES
#include <fstream>
#include <iostream>
#include <math.h>
#include <vector>
#include <cmath>
#include <iomanip>
#include <string>
#include <set>
#include <algorithm>
#include <deque>
#include <map>
#include <sstream>
#include <unordered_set>
#include <unordered_map>
typedef unsigned long long ul;
typedef long long ll;
typedef long double ld;
typedef double db;
using namespace std;


void f(int a, vector<pair<int,int>> &arr){
    a %= 11;
    a = 11 - a;
    for(int i = 0; i < a; i++){
        pair<int,int> first = arr[0];
        for(int i = 0; i < arr.size() - 1; i++){
            arr[i] = arr[i + 1];
            arr[i + 1] = first;
        }
    }
}
int main(){
    vector<pair<int,int>> arr;
    arr.push_back({1,6*14});
    arr.push_back({2,8*193});
    arr.push_back({3,10*4967});
    arr.push_back({4,5*12});
    arr.push_back({5,2*554});
    arr.push_back({6,4*1247});
    arr.push_back({7,56});
    arr.push_back({8,75});
    arr.push_back({9,3*6311});
    arr.push_back({10,7*35});
    arr.push_back({11,9*803});
    cout << 1 << " ";
    do
    {
        f(arr[0].second,arr);
        cout << arr[0].first << " ";
    } while (arr[0].first != 1);

}