#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
	int n, k; cin >> n >> k;
	int s[n];
	REP(i, n) cin >> s[i];
	ll sum = 1;
	int res = 0;
	for (int r = 0, l = 0; r < n; r++) {
		sum *= s[r];
		while (sum > k && l <= r)
			sum /= s[l++];
		res = max(res, r - l + 1);
	}
	cout << (sum ? res : n) << '\n';
	return 0;
}
