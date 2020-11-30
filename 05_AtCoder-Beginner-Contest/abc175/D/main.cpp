#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(false);

	int n, k; cin >> n >> k;
	vector<int> p(n), c(n);
	REP(i, n) cin >> p[i];
	REP(i, n) p[i]--;
	REP(i, n) cin >> c[i];

	ll maxi = -1e18;
	REP(i, n) {
		ll score = c[i];
		vector<ll> t;
		t.push_back(score);
		for (int j = p[i]; j != i; j = p[j]) {
			score += c[j];
			t.push_back(score);
		}
		int len = t.size();
		REP(j, len) {
			ll rest = k - j - 1;
			if (rest < 0) break ;
			maxi = max(maxi, t[j] + (rest/len) * max(score, 0LL));
		}
	}

	cout << maxi << '\n';
    return 0;
}
