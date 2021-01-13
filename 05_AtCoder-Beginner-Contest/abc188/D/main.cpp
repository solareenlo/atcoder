#include <bits/stdc++.h>
using namespace std;

int main() {
	int64_t n, C; cin >> n >> C;
	map<int64_t, int64_t> event;
	while (n--) {
		int64_t a, b, c; cin >> a >> b >> c;
		event[a] += c;
		event[b+1] -= c;
	}
	int64_t res = 0, fee = 0, t = 0;
	for (auto[x, y] : event) {
		if (x != t) {
			res += min(C, fee) * (x - t);
			t = x;
		}
		fee += y;
	}
	cout << res << '\n';
	return 0;
}
