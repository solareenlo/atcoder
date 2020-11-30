#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int n, m; cin >> n >> m;
	vector<int> h(n);
	REP(i, n) cin >> h[i];
	sort(h.begin(), h.end());
	vector<int> l(n/2+1), r(n/2+1);
	for (int i = 0; i < n - 1; i += 2)
		l[i/2+1] = l[i/2] + (h[i+1] - h[i]);
	for (int i = n - 2; i > 0; i -= 2)
		r[i/2] = r[i/2+1] + (h[i+1] - h[i]);
	int res = INT_MAX;
	REP(i, m) {
		int w; cin >> w;
		int x = lower_bound(h.begin(), h.end(), w) - h.begin();
		if (x & 1) x ^= 1;
		res = min(res, l[x/2] + r[x/2] + abs(w - h[x]));
	}
	cout << res << '\n';
}
