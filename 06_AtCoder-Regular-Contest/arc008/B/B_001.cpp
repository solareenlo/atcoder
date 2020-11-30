#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

	int n, m; cin >> n >> m;
	string name; cin >> name;
	string kit; cin >> kit;

	bool ok = true;
	REP(i, n) {
		auto pos = find(kit.begin(), kit.end(), name[i]);
		if (pos == kit.end())
			ok = false;
	}
	if (!ok) {
		cout << -1 << '\n';
		return 0;
	} else {
		multiset<char> a;
		REP(i, n) a.insert(name[i]);
		multiset<char> b;
		REP(i, m) b.insert(kit[i]);
		int cnt = 0;
		while (a.size() != 0) {
			multiset<char> result;
			set_intersection(a.begin(), a.end(),
					b.begin(), b.end(),
					inserter(result, result.end()));
			multiset<char> diff;
			set_difference(a.begin(), a.end(),
					result.begin(), result.end(),
					inserter(diff, diff.end()));
			a = diff;
			cnt++;
		}
		cout << cnt << '\n';
	}
    return 0;
}
