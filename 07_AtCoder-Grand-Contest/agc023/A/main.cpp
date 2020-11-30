#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(false);

	int n; cin >> n;
	vector<ll> a(n);
	REP(i, n) cin >> a[i];

	map<ll, ll> cnt;
	cnt[0]++;
	vector<ll> s(n + 1, 0);
	ll res = 0;
	REP(i, n) {
		s[i + 1] += s[i] + a[i];
		res += cnt[s[i + 1]]++;
	}
	cout << res << '\n';
    return 0;
}
