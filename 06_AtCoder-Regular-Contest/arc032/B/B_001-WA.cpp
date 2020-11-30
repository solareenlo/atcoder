#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

	int n, m; cin >> n >> m;

	int cntGroup = 0;
	int num = 0;
	if (m) {
		vector<set<int> > tmp;
		int c, d; cin >> c >> d;
		set<int> e;
		e.insert(c);
		e.insert(d);
		tmp.push_back(e);
		REP(i, m - 1) {
			int a, b; cin >> a >> b;
			int cnt = 0;
			REP(j, (int)tmp.size()) {
				auto itrA = tmp[j].find(a);
				auto itrB = tmp[j].find(b);
				if (itrA == tmp[j].end() && itrB == tmp[j].end())
					cnt++;
				else {
					tmp[j].insert(a);
					tmp[j].insert(b);
					break ;
				}
			}
			if (cnt == (int)tmp.size()) {
				set<int> f;
				f.insert(a);
				f.insert(b);
				tmp.push_back(f);
			}
		}
		REP(i, (int)tmp.size())
			num += (int)tmp[i].size();
		cntGroup = (int)tmp.size();
	}

	if (!m) cout << n - 1 << '\n';
	else cout << cntGroup - 1 + n - num << '\n';
    return 0;
}
