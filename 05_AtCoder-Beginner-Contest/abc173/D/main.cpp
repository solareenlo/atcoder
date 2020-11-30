#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(false);

	int n;
	cin >> n;
	vector<ll> a(n);
	REP(i, n) cin >> a[i];
	sort(a.rbegin(), a.rend());

	ll res = a[0];
	int cnt = 1;
	int i = 1;
	while (true) {
		if (cnt == n - 1) break ;
		res += a[i];
		cnt++;
		if (cnt == n - 1) break ;
		res += a[i];
		cnt++;
		i++;
	}
	cout << res << '\n';
    return 0;
}
