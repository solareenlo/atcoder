#include <bits/stdc++.h>
int n, k, l, r, mid, cnt;
using namespace std;
int main() {
	cin >> n >> k;
	vector<int> a(n);
	for (int &x : a) {
		cin >> x;
		r = max(r, x);
	}
	while (r - l > 1) {
		mid = (r + l) / 2;
		cnt = 0;
		for (int x : a) cnt += (x - 1) / mid;
		((cnt <= k) ? r : l) = mid;
	}
	cout << r << '\n';
	return 0;
}
