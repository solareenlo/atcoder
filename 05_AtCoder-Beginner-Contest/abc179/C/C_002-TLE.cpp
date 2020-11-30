#include <bits/stdc++.h>
#define REP(i, n) for (int i = 1; i < (n); i++)
using namespace std;

int main() {
	int n; cin >> n;
	int cnt = 0;
	REP(c, n + 1) {
		double sqr = sqrt(c);
		if (floor(sqrt(c)) == sqrt(c))
			cnt++;
		REP(a, sqr) {
			if ((n - c) % a == 0) {
				int b = (n - c) / a;
				if (b != 0)
					cnt += 2;
			}
		}
	}
	if (floor(sqrt(n)) == sqrt(n))
		cnt--;
	cout << cnt << '\n';
	return 0;
}
