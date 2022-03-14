
#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <iomanip>
#include <set>
using namespace std;
typedef long long ll;
typedef long double ld;

int main(){

int a = 65280;
int b = 61680;
int c = 52428;
int d = 43690;
vector<int> arr;
vector<int> sample={0,0,0,0,1,1,0,1,1,1,0,0,1,1,0,1};
for(int i = 2; i < 63; i++){
    arr = {};
    for (int j = 0; j < 16; j++){
	    if (((a >> j) % 2 == (i >> 5) % 2) && ((c >> j) % 2 == (i >> 4) % 2) || ((b >> j) % 2 == (i >> 3) % 2) &&
        ((d >> j) % 2 == (i >> 2) % 2) || ((b >> j) % 2 == (i >> 1) % 2) && ((c >> j) % 2 == (i >> 0) % 2)){
            arr.push_back(1);
        }else{
            arr.push_back(0);
        }
        
    }
    if(arr == sample){
        cout << i;
        break;
    }
}






	
}