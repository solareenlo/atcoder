#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

	int n, m; cin >> n >> m;

	int ret = 0;
	if (n == 1) ret = m;
	else if (n == m ) ret = 1;
	else {
		int div = m / n;
		for (int i = 1; i <= div; i++) {
			int mod = (m - i * n) % i;
			if (mod == 0) ret = i;
		}
	}
	cout << ret << '\n';
    return 0;
}
