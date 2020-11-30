#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(false);

	int n, k; cin >> n >> k;
	vector<int> a(n);
	REP(i, n) cin >> a[i];

	REP(i, n - k) {
		if (a[i] < a[i + k]) cout << "Yes" << '\n';
		else cout << "No" << '\n';
	}
	return 0;
}
