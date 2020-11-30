#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int n, x, y; cin >> n >> x >> y;
	x--;
	y--;

	vector<int> res(n, 0);
	REP(i, n) for (int j = i + 1; j < n; j++) {
		int mini = min(min(abs(j - i), abs(x - i) + 1 + abs(y - j)), abs(y - i) + 1 + abs(x - j));
		res[--mini]++;
	}

	REP(i, n - 1) cout << res[i] << '\n';
    return 0;
}
