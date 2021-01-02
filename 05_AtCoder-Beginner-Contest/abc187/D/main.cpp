#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int n; cin >> n;
	vector<int64_t> x(n);
	int64_t sumA = 0;
	REP(i, n) {
		int64_t a, b; cin >> a >> b;
		sumA += a;
		x[i] = a + a + b;
	}
	sort(x.rbegin(), x.rend());
	int cnt = 0;
	REP(i, n) {
		if (sumA >= 0) {
			sumA -= x[i];
			cnt++;
		}
	}
	cout << cnt << '\n';
    return 0;
}
