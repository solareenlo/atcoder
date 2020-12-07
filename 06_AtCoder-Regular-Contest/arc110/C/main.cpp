#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int n; cin >> n;
	vector<int> p(n), pos(n), res;
	REP(i, n) cin >> p[i], pos[--p[i]] = i;

	vector<bool> used(n-1, false);
	REP(i, n) {
		int now = pos[i];
		while (i < now) {
			int before = now - 1;
			if (used[before]) { cout << -1 << '\n'; return 0; }
			used[before] = true;
			pos[p[now]] = before;
			pos[p[before]] = now;
			swap(p[before], p[now]);
			res.emplace_back(before);
			now--;
		}
	}

	if ((int)res.size() != n-1) cout << -1 << '\n';
	else REP(i, n-1) cout << res[i] + 1 << '\n';
    return 0;
}
