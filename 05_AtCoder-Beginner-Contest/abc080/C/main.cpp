#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(false);

	int N; cin >> N;
	vector<vector<int> > F(N, vector<int> (10));
	REP(i, N) REP(j, 10) cin >> F[i][j];
	vector<vector<int> > P(N, vector<int> (11));
	REP(i, N) REP(j, 11) cin >> P[i][j];

	ll res = -1e18;
	for (int bit = 1; bit < 1 << 10; bit++) {
		ll sum = 0;
		REP(i, N) {
			int cnt = 0;
			REP(j, 10) {
				if (((bit >> j) & 1) && F[i][j])
					cnt++;
			}
			sum += P[i][cnt];
		}
		res = max(res, sum);
	}

	cout << res << '\n';
    return 0;
}
