#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

inline int f(int x) {
	if (!x) return 0;
	return f(x % __builtin_popcount(x)) + 1;
}

int main() {
	cin.tie(0)->sync_with_stdio(false);

	int n; cin >> n;
	string X; cin >> X;
	vector<int> x;
	REP(i, n) x[i] = X[i] - '0';

	int pc = 0;
	REP(i, n) pc += x[i];

	vector<int> res(n);
	REP(bit, 2) {
		int next_pc = pc;
		if (!bit) next_pc++;
		else next_pc--;
		if (next_pc <= 0) continue ;
		int rem0 = 0;
		REP(i, n) {
			rem0 = (rem0 * 2) % next_pc;
			rem0 += x[i];
		}
		int b = 1;
		for (int i = n - 1; i >= 0; i--) {
			if (x[i] == bit) {
				int rem = rem0;
				if (!bit) rem = (rem + b) % next_pc;
				else rem = (rem - b + next_pc) % next_pc;
				res[i] = f(rem) + 1;
			}
			b = (b * 2) % next_pc;
		}
	}

	REP(i, n) cout << res[i] << '\n';
	return 0;
}
