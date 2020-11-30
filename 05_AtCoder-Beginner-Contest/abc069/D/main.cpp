#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

	int h, w;
	cin >> h >> w;
	int n;
	cin >> n;
	queue<int> a;
	REP(i, n) {
		int tmp;
		cin >> tmp;
		REP(j, tmp)
			a.push(i + 1);
	}

	vector<vector<int> > res(h, vector<int>(w));
	REP(i, h) REP(j, w) {
		res[i][j] = a.front();
		a.pop();
	}

	REP(i, h) {
		if (i % 2)
			reverse(res[i].begin(), res[i].end());
		REP(j, w) {
			cout << res[i][j];
			if (j != w - 1) cout << ' ';
		}
		cout << '\n';
	}
    return 0;
}
