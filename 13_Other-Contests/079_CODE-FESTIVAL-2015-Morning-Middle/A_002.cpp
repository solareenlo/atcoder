#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int n, k; cin >> n >> k;
	int64_t m, r; cin >> m >> r;
	vector<int> s(n-1);
	REP(i, n-1) cin >> s[i];
	sort(s.rbegin(), s.rend());
	int64_t sum = 0;
	REP(i, k-1) sum += s[i];
	int64_t expected = r*k;
	if (sum>=expected || (n!=k&&sum+s[k-1]>=expected)) cout << 0 << '\n';
	else if (sum+m >= expected) cout << expected - sum << '\n';
	else cout << -1 << '\n';
	return 0;
}
