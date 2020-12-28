#include <bits/stdc++.h>
using namespace std;
const int64_t MOD = 1e9 + 7;

int main() {
	int n; cin >> n;
	string s; cin >> s;
	map<char, int> c;
	for (int i = 0; i < n; i++)
		c[s[i]]++;
	int64_t res = 1;
	for (auto x : c) {
		res *= x.second + 1;
		res %= MOD;
	}
	cout << res - 1 << '\n';
	return 0;
}
