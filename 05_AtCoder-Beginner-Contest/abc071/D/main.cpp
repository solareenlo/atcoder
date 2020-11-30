#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

int main() {
    cin.tie(0)->sync_with_stdio(false);

	int n;
	cin >> n;
	string s1, s2;
	cin >> s1 >> s2;

	ll res;
	int start;
	if (s1[0] == s2[0]) {
		res = 3;
		start = 1;
	} else {
		res = 3 * 2;
		start = 2;
	}
	for (int i = start; i < n; i++) {
		if (s1[i - 1] == s2[i - 1]) {
			res *= 2;
			res %= MOD;
			if (s1[i] != s2[i]) i++;
		} else {
			if (s1[i] != s2[i]) {
				res *= 3;
				res %= MOD;
				i++;
			}
		}
	}

	cout << res << '\n';
    return 0;
}
