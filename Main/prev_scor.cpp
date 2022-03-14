#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int binarySearch(vector<double> &t, int time, vector<int> &f){
	if (time > t[0]){
		return 0;
	}

	int l = -1;
	int r = t.size() - 1;

	while (r - l > 1){
		int m = (l + r) / 2;
		if (t[m] > time){
			l = m;
		} else {
			r = m;
		}
	}

	return f[r];
}

int main() {
	int n, m;
	cin >> n;
  vector<double> v(n);
	vector<double> l(n);
	for (int i = 0; i < n; i++){
		cin >> v[i];
	}
	for (int i = 0; i < n; i++){
		cin >> l[i];
	}

	cin >> m;
	vector<int> a(m + 1, 0);
	vector<int> f(m + 1, 0);
	for (int i = 1; i < m; i++){
		cin >> a[i];
	}
	a[m] = 1000000000;
	for (int i = 1; i <= m; i++){
		cin >> f[i];
	}

	vector<double> t(m + 1, 0);
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			t[i] += (l[j]) / (v[j] + a[i]);
		}
	}

	int q;
	cin >> q;
	for (int i = 0; i < q; i++){
		int t1, t2;
		cin >> t1 >> t2;
		int time = t2 - t1;

		cout << binarySearch(t, time, f) << endl;
	}
  return 0;
}

