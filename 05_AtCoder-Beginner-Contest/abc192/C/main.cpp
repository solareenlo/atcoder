#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k; cin >> n >> k;
	while (k--) {
		string s = to_string(n);
		sort(s.begin(), s.end());
		string t = s;
		sort(t.rbegin(), t.rend());
		n = stoi(t) - stoi(s);
	}
	cout << n << '\n';
	return 0;
}
