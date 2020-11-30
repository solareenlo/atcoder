#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using P = pair<int, int>;

const int cnt[6] = {1, -1, 5, -5, 10, -10};

int main() {
	cin.tie(0)->sync_with_stdio(false);

	int a, b; cin >> a >> b;

	queue<P> que;
	vector<bool> ok(50);
	ok[a] = true;
	que.push(make_pair(a, 0));
	int res = 0;
	while (!que.empty()) {
		P x = que.front();
		que.pop();
		if (x.first == b) {
			res = x.second;
			break ;
		}
		REP(i, 6) {
			int j = x.first + cnt[i];
			if (j >= 0) {
				if (!ok[j]) {
					ok[j] = true;
					que.push(make_pair(j, x.second + 1));
				}
			}
		}
	}

	cout << res << '\n';
	return (0);
}
