#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int n; cin >> n;
	int cnt = 0;
	bool ok = false;
	REP(i, n) {
		int l, r; cin >> l >> r;
		if (l == r)
			cnt++;
		else
			cnt = 0;
		if (cnt == 3) {
			ok = true;
		}
	}
	if (ok) cout << "Yes" << '\n';
	else cout << "No" << '\n';
	return 0;
}
