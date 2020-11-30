#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int h, w, n; cin >> h >> w >> n;
	queue<int> q;
	REP(i, n) {
		int a; cin >> a;
		REP(j, a) q.push(i+1);
	}
	vector<vector<int> > res(h, vector<int>(w, 0));
	REP(i, h) REP(j, w) {
		res[i][j] = q.front();
		q.pop();
	}
	REP(i, h)
		if (i % 2) reverse(res[i].begin(), res[i].end());
	REP(i, h) REP(j, w) {
		cout << res[i][j];
		if (j == w - 1) cout << '\n';
		else cout << " ";
	}
    return 0;
}
