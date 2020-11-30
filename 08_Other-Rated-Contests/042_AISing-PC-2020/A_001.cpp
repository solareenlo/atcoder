#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(false);

	int l, r, d;
	cin >> l >> r >> d;
	int cnt = 0;
	for (int i = l; i <= r; i++)
		if (i % d == 0)
			cnt++;
	cout << cnt << '\n';
	return 0;
}
