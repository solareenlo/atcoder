#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
	int n, k; cin >> n >> k;
	int res = 0;
	ll s[n];
	REP(i, n) {
		cin >> s[i];
		if (s[i] == 0) res = n;
	}
	int l = 0;
	ll sum = 1;
	REP(r, n) {
		sum *= s[r];
		while (sum > k && l <= r)
			sum /= s[l++];
		res = max(res, r - l + 1);
	}
	cout << res << '\n';
    return 0;
}
