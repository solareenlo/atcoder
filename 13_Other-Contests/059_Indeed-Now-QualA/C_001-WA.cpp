#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(false);

	int N; cin >> N;
	map<int, int> tmp;
	REP(i, N) {
		int s; cin >> s;
		if (s != 0)
			tmp[s]++;
	}

	vector<pair<int, int> > cnt;
	auto itr = tmp.rbegin();
	for (; itr != tmp.rend(); itr++)
		cnt.push_back(make_pair(itr->second, itr->first));
	int n = cnt.size();
	REP(i, n - 1)
		cnt[i + 1].first += cnt[i].first;

	int q; cin >> q;
	vector<int> k(q);
	REP(i, q) cin >> k[i];

	if (n == 0) {
		REP(i, q) cout << 0 << '\n';
	}
	else {
		REP(i, q) {
			auto itr = upper_bound(cnt.begin(), cnt.end(), make_pair(k[i], 0));
			if (itr == cnt.end() - 1)
				cout << 0 << '\n';
			else
				cout << itr->second + 1<< '\n';
		}
	}
	return 0;
}
