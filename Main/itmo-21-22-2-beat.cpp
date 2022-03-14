#define _USE_MATH_DEFINES
#include<iostream>
#include<fstream>
#include<vector>
#include<queue>
#include<set>
#include<map>
#include<string>
#include<utility>
#include<cmath>
#include<algorithm>
typedef unsigned long long ul;
typedef long long ll;
using namespace std;



int main(){
    
    string str;
		cin >> str;
		vector<string> vec(1, "");
		for (char c : str){
			if (c == ','){
				vec.push_back("");
			} else {
				vec.back().push_back(c);
			}
		}

		set<string> ans;

		while (cin >> str){
			string tmp = "";
			tmp.push_back(',');
			int id = 0;
			for (char c : str){
				if (c == ','){
					if (tmp != ""){
						ans.insert(vec[id]);
					}
					id++;
				} else {
					tmp.push_back(c);
				}
			}
		}

		for (string& s : ans){
			cout << s << endl;
		}
		

    return 0;
}