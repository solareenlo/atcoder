#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	string s; cin >> s;
	int c[26] = {};
	for (int i = 0; i < n; i++)
		c[s[i]-'a']++;
	int64_t res = 1;
	for (int x : c) {
		res *= x + 1;
		res %= 1000000007;
	}
	cout << res - 1 << '\n';
}
