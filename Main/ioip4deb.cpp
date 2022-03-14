/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

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


int main()
{
    vector < vector<int> > g={{1,2,3},{2},{4}};
    int n = 5;
    int s = 0;
    
     
queue<int> q;
q.push (s);
vector<bool> used (n);
vector<int> d (n), p (n);
used[s] = true;
p[s] = -1;
while (!q.empty()) {
	int v = q.front();
	q.pop();
	for (size_t i=0; i<g[v].size(); ++i) {
		int to = g[v][i];
		if (!used[to]) {
			used[to] = true;
			q.push (to);
			d[to] = d[v] + 1;
			p[to] = v;
		}
	}
}
    
    
    
    int to = 4;
    if (!used[to])
	cout << "No path!";
else {
	vector<int> path;
	for (int v=to; v!=-1; v=p[v])
		path.push_back (v);
	reverse (path.begin(), path.end());
	cout << "Path: ";
	for (size_t i=0; i<path.size(); ++i)
		cout << path[i] + 1 << " ";
}
}