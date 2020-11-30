#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
#define ALL(a) (a).begin(),(a).end()
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(false);

	int n; cin >> n;
	ll h; cin >> h;
	vector<ll> a(n), b(n);
	REP(i, n) cin >> a[i] >> b[i];
	sort(ALL(a));
	sort(ALL(b));

	auto itr = lower_bound(ALL(b), a[n - 1]);
	int index;
	if (itr == b.end()) index = 0;
	else index = distance(b.begin(), itr);

	ll cnt = 0;
	for (int i = n - 1; i >= index; i--) {
		h -= b[i];
		cnt++;
		if (h <= 0) break;
	}

	if (h > 0) {
		ll div = h / a[n - 1];
		ll rem = h % a[n - 1];
		if (rem) cnt += div + 1;
		else cnt += div;
	}

	cout << cnt << '\n';
    return 0;
}
