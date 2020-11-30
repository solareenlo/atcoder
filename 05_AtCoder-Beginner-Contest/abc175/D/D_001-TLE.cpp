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

	ll maxi = -1e15;
	if (n > k) {
		REP(i, n) {
			ll score = 0;
			int pos = p[i];
			REP(j, k) {
				score += c[pos];
				pos = p[pos];
				maxi = max(maxi, score);
			}
		}
	}
	else {
		ll mod = k % n;
		REP(i, n) {
			ll score = 0;
			int pos = p[i];
			REP(j, n) {
				score += c[pos];
				pos = p[pos];
				maxi = max(maxi, score);
			}
		}
		ll maxi2 = -1e16;
		REP(i, n) {
			ll score = 0;
			int pos = p[i];
			REP(j, mod) {
				score += c[pos];
				pos = p[pos];
				maxi2 = max(maxi2, score);
			}
		}
		maxi += maxi2;
	}
	cout << maxi << '\n';
	return 0;
}
