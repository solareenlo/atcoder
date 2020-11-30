#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(false);

	int n, m; cin >> n >> m;
	string name; cin >> name;
	string kit; cin >> kit;

	vector<int> a(26, 0), b(26, 0);
	REP(i, n) a[name[i] - 'A']++;
	REP(i, m) b[kit[i] - 'A']++;

	int res = 0;
	REP(i, 26) {
		if (a[i] != 0) {
			if (b[i] == 0) {
				cout << -1 << '\n';
				return 0;
			}
			res = max(res, (a[i] + b[i] - 1) / b[i]);
		}
	}
	cout << res << '\n';
	return 0;
}
