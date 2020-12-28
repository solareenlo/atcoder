#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

int main() {
	int n; cin >> n;
	string s; cin >> s;
	map<char, int> c;
	REP(i, n)
		c[s[i]]++;
	ll res = 1;
	for (auto x : c) {
		res *= x.second + 1;
		res %= MOD;
	}
	cout << res - 1 << '\n';
    return 0;
}
