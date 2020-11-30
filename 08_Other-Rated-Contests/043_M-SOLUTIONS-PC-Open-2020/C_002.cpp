#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
	cin.tie(0)->sync_with_stdio(false);

	ll n, k; cin >> n >> k;
	vector<ll> a(n);
	REP(i, n) cin >> a[i];
	for (int i = k; i < n; i++) {
		if (a[i - k] < a[i]) cout << "Yes" << '\n';
		else cout << "No" << '\n';
	}
	return 0;
}
