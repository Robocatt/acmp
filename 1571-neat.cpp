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
#include <stdlib.h>
#include <regex>
using namespace std;
typedef long long ll;
typedef long double ld;
#define inf 2000000001
#define infD 200000000001
#define infL 2000000000000000001
#define module 1000000007
 
using namespace std;
 
bool checkRow(vector<vector<ll>>& vec, ll i, ll d) {
    for (int j = 1; j < vec[i].size(); j++) {
        if (vec[i][j] - vec[i][j - 1] != d) {
            return false;
        }
    }
    return true;
}
 
bool checkColumn(vector<vector<ll>>& vec, ll j, ll d) {
    for (int i = 1; i < vec.size(); i++) {
        if (vec[i][j] - vec[i - 1][j] != d) {
            return false;
        }
    }
    return true;
}
 
 
int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
 
    int n, m;
    ll x, y;
    in >> n >> m;
    vector<vector<ll>> vec(n, vector<ll>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            in >> vec[i][j];
        }
    }
    if (n == 1 && m == 1) {
        out << "true";
        return 0;
    }
 
    if (m != 1) {
        x = vec[0][1] - vec[0][0];
        if (x <= 0 || vec[0][0] % x != 0) {
            out << "false";
            return 0;
        }
        for (int i = 0; i < n; i++) {
            if (!checkRow(vec, i, x + i)) {
                out << "false";
                return 0;
            }
        }
    }
 
    if (n != 1) {
        y = vec[1][0] - vec[0][0];
        if (y <= 0 || vec[0][0] % y != 0) {
            out << "false";
            return 0;
        }
        for (int j = 0; j < m; j++) {
            if (!checkColumn(vec, j, y + j)) {
                out << "false";
                return 0;
            }
        }
    }
 
    if (n != 1 && m != 1 && x * y != vec[0][0]) {
        out << "false";
        return 0;
    }
     
     
    out << "true";
 
    in.close();
    out.close();
    return 0;
}