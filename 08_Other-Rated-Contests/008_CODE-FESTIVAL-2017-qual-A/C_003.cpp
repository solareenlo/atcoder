#include <bits/stdc++.h>
using namespace std;

int main() {
	int h, w; cin >> h >> w;
	vector<int> a(26, 0);
	for (int i = 0; i < h * w; i++) {
		char c; cin >> c;
		a[c - 'a']++;
	}
	int cnt1, cnt2;
	cnt1 = cnt2 = 0;
	for (auto x : a) {
		if (x % 2) cnt1++;
		if (x % 4 == 2) cnt2++;
	}
	cout << ((cnt1 <= h*w%2 && cnt2 <= h/2*(w%2)+w/2*(h%2)) ? "Yes" : "No") << '\n';
	return 0;
}
