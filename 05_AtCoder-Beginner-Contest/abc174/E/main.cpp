#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k; cin >> n >> k;
	vector<int> a(n);
	int l = 0, r = 0;
	for (int &x : a) {
		cin >> x;
		r = max(r, x);
	}
	while (r - l > 1) {
		int mid = (r + l) / 2;
		int cnt = 0;
		for (int x : a) cnt += (x - 1) / mid;
		if (cnt <= k) r = mid;
		else l = mid;
	}
	cout << r << '\n';
	return 0;
}
