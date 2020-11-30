#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
	cin.tie(0)->sync_with_stdio(false);

	int n; cin >> n;
	vector<ll> a(n), b(n);
	REP(i, n) cin >> a[i];
	REP(i, n) cin >> b[i];
	ll cntA = 0;
	ll cntB = 0;
	REP(i, n) {
		if (a[i] > b[i]) cntA += a[i] - b[i];
		else if (a[i] < b[i]) cntB += (b[i] - a[i]) / 2;
	}

	if (cntA <= cntB) cout << "Yes" << '\n';
	else cout << "No" << '\n';
	return 0;
}
