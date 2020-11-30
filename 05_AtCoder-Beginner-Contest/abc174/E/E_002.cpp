#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
int main() {
	int n, k; cin >> n >> k;
	vector<int> a(n);
	REP(i, n) cin >> a[i];
	int l = 0, r = *max_element(a.begin(), a.end());
	while (r - l > 1) {
		int mid = (l + r) / 2;
		int cnt = 0;
		REP(i, n) cnt += (a[i] - 1) / mid;
		if (cnt <= k) r = mid;
		else l = mid;
	}
	cout << r << '\n';
	return 0;
}
