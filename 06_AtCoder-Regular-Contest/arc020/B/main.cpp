#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

	int n, c; cin >> n >> c;
	vector<int> a(n);
	REP(i, n) cin >> a[i];
	REP(i, n) a[i]--;

	int mini = INT_MAX;
	REP(i, 10) REP(j, 10) {
		if (i != j) {
			int cnt = 0;
			for (int k = 0; k < n; k += 2) {
				if (i != a[k])
					cnt++;
				if (k + 1 < n)
					if (j != a[k + 1])
						cnt++;
			}
			mini = min(mini, cnt);
		}
	}
	cout << mini * c << '\n';
    return 0;
}
