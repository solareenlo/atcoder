#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(false);

	int n, m, k;
	cin >> n >> m >> k;
	vector<int> A(n), B(m);
	REP(i, n) cin >> A[i];
	REP(i, m) cin >> B[i];

	vector<ll> a(n + 1, 0);
	REP(i, n) a[i + 1] = a[i] + A[i];
	vector<ll> b(m + 1, 0);
	REP(i, m) b[i + 1] = b[i] + B[i];

	ll res = 0;
	int j = m;
	REP(i, n + 1) {
		if (a[i] > k) break ;
		while (b[j] > k - a[i])
			j -= 1;
		res = max(res, (ll)(i + j));
	}

	cout << res << '\n';
    return 0;
}
