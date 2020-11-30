#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

const ll MOD = 1e9 + 7;

int main(){
    cin.tie(0)->sync_with_stdio(false);

	int n; cin >> n;
	vector<ll> a(n);
	REP(i, n) cin >> a[i];
	sort(a.begin(), a.end());

	ll cnt = 0;
	if(n % 2) {
		bool ok = true;
		REP(i, n) {
			int tmp = i;
			if (i % 2) tmp++;
			if (tmp != a[i]) {
				ok = false;
				break ;
			}
		}
		if (ok) cnt = n / 2;
	} else {
		bool ok = true;
		REP(i, n) {
			int tmp = i;
			if (!(i % 2)) tmp++;
			if (tmp != a[i]) {
				ok = false;
				break ;
			}
		}
		if (ok) cnt = n / 2;
	}

	if (n == 1 && a[0] == 0) {
		cout << 1 << '\n';
	} else if (cnt) {
		ll ans = 1;
		REP(i, cnt) {
			ans *= 2;
			ans %= MOD;
		}
		cout << ans << '\n';
	} else cout << cnt << '\n';
    return 0;
}
