#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int f(int x) {
	if (x == 0) return 0;
	return f(x % __builtin_popcount(x)) + 1;
	// return f(x % __builtin_popcountll(x)) + 1;
}

int main() {
	cin.tie(0)->sync_with_stdio(false);

	int n; cin >> n;
	string s; cin >> s;
	vector<int> x(n);
	REP(i, n) x[i] = s[i] - '0';

	int pc = 0; // pc == pop_count
	REP(i, n) pc += x[i];

	vector<int> res(n);
	// 元の bit が 0 のところを1個だけ 1 にした場合と
	// 元の bit が 1 のところを1個だけ 0 にした場合とに分けて考えてる
	REP(bit, 2) {
		// 元の bit の popcount の変動をセットする
		int next_pc = pc;
		if (bit == 0) next_pc++;
		else next_pc--;
		// next_pc が 0 以下になった場合の例外処理
		if (next_pc <= 0) continue ;
		// 元の数を next_pc で割った余り(== rem0)を求める
		// これで1段回目が終わる
		int rem0 = 0;
		REP(i, n) {
			// 2進数を前から順番に見ていって10進数にしている
			rem0 = (rem0 * 2) % next_pc;
			rem0 += x[i];
		}
		// 1段回目が終わった後は，
		// 差分を足して，
		// その数を next_pc で割った余りを求める
		int k = 1;
		for (int i = n - 1; i >= 0; i--) {
			// i 桁目をフリップしたときの割った余りを求める
			if (x[i] == bit) {
				int rem = rem0;
				// i 番目の bit が 0 の時は，
				// i 番目の bit が 1 に変わるので，
				// 2^i を [next_pc で割った余り]に足してあげて，
				// next_pc で割った余りを求める
				if (bit == 0) rem = (rem + k) % next_pc;
				// i 番目の bit が 1 の時は，
				// i 番目の bit が 0 に変わるので，
				// 2^i を [next_pc で割った余り]から引いてあげて，
				// next_pc で割った余りを求める
				else rem = (rem - k + next_pc) % next_pc;
				// そして，popcount を求める
				res[i] = f(rem) + 1;
			}
			// 2^i の値
			k = (k * 2) % next_pc;
		}
	}

	REP(i, n)
		cout << res[i] << '\n';
	return 0;
}
