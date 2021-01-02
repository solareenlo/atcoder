#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (n); i++)

int main() {
	int n; cin >> n;
	set<string> a, b, res;
	REP(i, n) {
		string s; cin >> s;
		if (s[0] == '!') a.insert(s.substr(1));
		else b.insert(s);
	}
	set_intersection(a.begin(), a.end(),
			b.begin(), b.end(),
			inserter(res, res.end()));
	for (auto x : res) {
		cout << x << '\n';
		return 0;
	}
	cout << "satisfiable" << '\n';
    return 0;
}
