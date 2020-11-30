#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	string s; cin >> s;
	int n = s.size();

	ll res = 0;
	ll cnt = 0;
	for (int i = 1; i < n; i++) {
		if (s[i-1] == '2' && s[i] == '5') {
			cnt++;
			i++;
		} else
			cnt = 0;
		res += cnt;
	}

	cout << res << '\n';
	return 0;
}
