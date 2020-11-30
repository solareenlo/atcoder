#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(false);

	int n, p; cin >> n >> p;
	int cntO = 0;
	int cntE = 0;
	REP(i, n) {
		int tmp; cin >> tmp;
		if (tmp % 2) cntO++;
		else cntE++;
	}

	ll res = 0;
	if (cntO > 0)
		res = pow(2, n - 1);
	else if (cntO == 0) {
		if (p == 1)
			res = 0;
		else if (p == 0)
			res = pow(2, n);
	}

	cout << res << '\n';
    return 0;
}
