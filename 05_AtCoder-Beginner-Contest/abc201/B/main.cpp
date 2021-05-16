#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	pair<int, string> m[n];
	for (int i=0; i<n; i++) {
		string s; cin >> m[i].second;
		int t; cin >> m[i].first;
	}
	sort(m, m+n);
	cout << m[n-2].second << '\n';
    return 0;
}
