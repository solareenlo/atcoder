#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

	int n, m; cin >> n >> m;
	vector<int> a(m);
	REP(i, m) cin >> a[i];
	reverse(a.begin(), a.end());

	map<int, bool> res;
	REP(i, n) res[i+1] = false;

	REP(i, m) {
		if (!res[a[i]]) {
			cout << a[i] << '\n';
			res[a[i]] = true;
		}
	}
	for (auto x : res) {
		if (!x.second)
			cout << x.first << '\n';
	}
    return 0;
}
