#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

inline
int gcd(int x, int y) {
	if (x % y == 0) return y;
	else return gcd(y, x % y);
}

int main() {
	cin.tie(0)->sync_with_stdio(false);

	int n, k; cin >> n >> k;
	vector<int> a(n);
	REP(i, n) cin >> a[i];

	int g = a[0];
	REP(i, n) g = gcd(g, a[i]);

	if (k <= *max_element(a.begin(), a.end()) && k % g == 0)
		cout << "POSSIBLE" << '\n';
	else
		cout << "IMPOSSIBLE" << '\n';
	return 0;
}
