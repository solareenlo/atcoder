#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	cin.tie(0)->sync_with_stdio(false);

	int n; cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) cin >> a[i];
	sort(a.begin(), a.end());

	ll res = a[n-1] - a[0]; // 1番大きい数と1番小さい数との差を足す
	for (int i = 1; i < n/2; ++i) {
		res += a[n-i] - a[i]; // 1番大きい数と2番目に小さい数との差を足す
		res += a[n-i-1] - a[i-1]; // 2番目に大きい数と1番小さい数との差を足す
	}
	// n が奇数の場合は，
	// 真ん中の両脇の数の差が大きい方を足す
	if(n & 1)
		res += max(a[n/2+1] - a[n/2], a[n/2] - a[n/2-1]);
	cout << res << '\n';
	return 0;
}
