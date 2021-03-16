#include <bits/stdc++.h>
#define REP(i, n) for (int i = 1; i <= (n); i++)
using namespace std;

const int MOD = 998244353;
int f[200002];
int find(int x) { return f[x] == x ? f[x] : f[x] = find(f[x]); }

int main() {
	int n; cin >> n;
	REP(i, n) f[i] = i;
	REP(i, n) {
		int x; cin >> x;
		f[find(x)] = find(i);
	}
	int res = 1;
	REP(i, n) if (f[i] == i) res = (res<<1) % MOD;
	cout << res-1 << '\n';
	return 0;
}
