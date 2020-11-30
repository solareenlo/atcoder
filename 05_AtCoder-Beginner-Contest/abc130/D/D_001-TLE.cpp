#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(false);

	int n, k; cin >> n >> k;
	vector<ll> a(n);
	REP(i, n) cin >> a[i];

	vector<ll> s(n + 1, 0);
	REP(i, n) s[i+1] += s[i] + a[i];

	ll cnt = 0;
	REP(i, n) for (int j = i + 1; j <= n; j++) {
		if (s[j] - s[i] >= k) {
			cnt += n - j + 1;
			break ;
		}
	}
	cout << cnt << '\n';
    return 0;
}
