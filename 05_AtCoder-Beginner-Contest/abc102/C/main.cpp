#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
	cin.tie(0)->sync_with_stdio(false);

	int n; cin >> n;
	vector<int> a(n);
	REP(i, n) cin >> a[i];

	vector<int> b(n);
	REP(i, n) b[i] = a[i] - i - 1;
	nth_element(b.begin(), b.begin() + b.size()/2, b.end());

	int med = b[b.size()/2];

	ll res = 0;
	REP(i, n) res += abs(b[i] - med);
	cout << res << '\n';
	return 0;
}
