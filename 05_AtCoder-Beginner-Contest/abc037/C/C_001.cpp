#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main(){
    cin.tie(0)->sync_with_stdio(false);

	int n, k;
	cin >> n >> k;
	vector<ll> a(n);
	REP(i, n) cin >> a[i];

	ll ans = 0;
	REP(i, n) {
		ll sum = 0;
		if (i + n - k + 1 <= n) {
			for (int j = i; j < n - k + 1 + i; j++) {
				sum += a[j];
			}
		}
		ans += sum;
	}

	cout << ans << '\n';
    return 0;
}
