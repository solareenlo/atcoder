#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(false);

	int n; cin >> n;
	int cnt = 0;
	int mini = 2e9;
	ll res = 0;
	REP(i, n) {
		int a; cin >> a;
		if (a < 0) cnt++;
		mini = min(mini, abs(a));
		res += abs(a);
	}
	if (cnt % 2) res -= mini * 2;
	cout << res << '\n';
    return 0;
}
