#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, q; cin >> n >> q;
	pair<int, string> kumi[n];
	for (int i = 0; i < n; i++) {
		int year; cin >> year;
		string name; cin >> name;
		kumi[i] = make_pair(year, name);
	}
	reverse(kumi, kumi+n);
	for (auto x : kumi) {
		if (x.first <= q) {
			cout << x.second << '\n';
			return 0;
		}
	}
	cout << "kogakubu10gokan" << '\n';
	return 0;
}
