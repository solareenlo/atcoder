#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using P = pair<int, int>;

P f(int x) {
	int a = x % 10;
	int b = 0;
	while (x) {
		b = x;
		x /= 10;
	}
	return P(a, b);
}

int main() {
	int n; cin >> n;
	map<P, int> cnt;
	REP(i, n) {
		P p = f(i + 1);
		cnt[p]++;
	}
	int res = 0;
	REP(i, n) {
		P p = f(i + 1);
		P q(p.second, p.first);
		res += cnt[q];
	}
	cout << res << '\n';
	return 0;
}
