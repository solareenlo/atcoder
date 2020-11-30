#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int h, w; cin >> h >> w;
	map<char, int> a;
	REP(i, h * w) {
		char c; cin >> c;
		a[c - 'a']++;
	}
	int cnt1, cnt2;
	cnt1 = cnt2 = 0;
	for (auto x : a) {
		if (x.second % 4 == 1) cnt1++;
		if (x.second % 4 == 2) cnt2++;
		if (x.second % 4 == 3) cnt1++;
	}
	bool ok = false;
	if (h % 2 && w % 2) {
		if (cnt1 == 1 && cnt2 <= (h / 2) + (w / 2))
			ok = true;
	}
	else if (h % 2 == 0 && w % 2 == 0) {
		if (cnt1 == 0 && cnt2 == 0)
			ok = true;
	}
	else if (h % 2 == 0 && w % 2) {
		if (cnt1 == 0 && cnt2 <= h / 2)
			ok = true;
	}
	else if (h % 2 && w % 2 == 0) {
		if (cnt1 == 0 && cnt2 <= w / 2)
			ok = true;
	}
	cout << (ok ? "Yes" : "No") << '\n';
	return 0;
}
