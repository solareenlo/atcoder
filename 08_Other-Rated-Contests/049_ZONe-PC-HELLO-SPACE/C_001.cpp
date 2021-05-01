#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	vector a(n, array<int, 5>{});
	for (auto &i : a) for (int &j : i) cin >> j;
	int ok = 0, ng = 1e9+1;
	auto check = [&](int x) -> bool {
		set<int> s;
		for (auto &i : a) {
			int bit = 0;
			for (int &j : i) {
				bit <<= 1;
				bit |= j >= x;
			}
			s.insert(bit);
		}
		for (int x : s) for (int y : s) for (int z : s)
			if ((x | y | z) == 31)
				return 1;
		return 0;
	};
	while (abs(ok - ng) > 1) {
		int cen = (ok + ng) / 2;
		(check(cen) ? ok : ng) = cen;
	}
	cout << ok << '\n';
	return 0;
}
