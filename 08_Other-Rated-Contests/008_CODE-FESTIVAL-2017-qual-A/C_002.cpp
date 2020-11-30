#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int h, w; cin >> h >> w;
	vector<int> a(26, 0);
	REP(i, h * w) {
		char c; cin >> c;
		a[c - 'a']++;
	}
	int cnt1, cnt2;
	cnt1 = cnt2 = 0;
	for (auto x : a) {
		if (x % 2 == 1) cnt1++;
		if (x % 4 == 2) cnt2++;
	}
	bool ok = false;
	if (h % 2 && w % 2)
		ok = (cnt1 == 1 && cnt2 <= (h / 2) + (w / 2));
	else if (h % 2 == 0 && w % 2 == 0)
		ok = (cnt1 == 0 && cnt2 == 0);
	else if (h % 2 == 0 && w % 2)
		ok = (cnt1 == 0 && cnt2 <= h / 2);
	else if (h % 2 && w % 2 == 0)
		ok = (cnt1 == 0 && cnt2 <= w / 2);
	cout << (ok ? "Yes" : "No") << '\n';
	return 0;
}
