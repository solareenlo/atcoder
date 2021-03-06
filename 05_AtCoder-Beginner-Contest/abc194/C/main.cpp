#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int n; cin >> n;
	int a[n];
	REP(i, n) cin >> a[i];
	map<int, int> cnt;
	REP(i, n) cnt[a[i]]++;
	int64_t res = 0;
	for (auto &i : cnt) for (auto &j : cnt) {
		if (i.first > j.first) continue;
		if (i.first == j.first) continue;
		res += 1LL * (j.first - i.first) * (j.first - i.first) * i.second * j.second;
	}
	cout << res << '\n';
	return 0;
}
