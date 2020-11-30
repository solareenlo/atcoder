#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

	int n; cin >> n;
	vector<int> b(n + 1, 0);
	for (int i = 1; i <= n; i++)
		cin >> b[i];

	bool ok = true;
	vector<int> res;
	while (b.size() != 1) {
		pair<int, int> tmp = make_pair(-1, -1);
		for (int i = 1; i < (int)b.size(); i++) {
			if (b[i] == i)
				tmp = make_pair(i, b[i]);
		}
		if (tmp == make_pair(-1, -1)) {
			ok = false;
			break ;
		}
		res.push_back(tmp.second);
		b.erase(b.begin() + tmp.first);
	}
	if (ok) {
		reverse(res.begin(), res.end());
		for (int i = 0; i < (int)res.size(); i++)
			cout << res[i] << '\n';
	} else
		cout << -1 << '\n';
    return 0;
}
