#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int A, B, C, K;
	cin >> A >> B >> C >> K;

	bool ok = false;
	// 全探索
	REP(i, K + 1) REP(j, K + 1) REP(k, K + 1) {
		int a = A * (1 << i);
		int b = B * (1 << j);
		int c = C * (1 << k);
		if (i + j + k <= K && a < b && b < c)
			ok = true;
	}

	if (ok) cout << "Yes" << '\n';
	else cout << "No" << '\n';
	return 0;
}
