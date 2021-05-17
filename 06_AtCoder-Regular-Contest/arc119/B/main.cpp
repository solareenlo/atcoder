#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int n; cin >> n;
	string s, t; cin >> s >> t;
	vector<int> a, b;
	REP(i, n) {
		if (s[i] == '0') a.push_back(i);
		if (t[i] == '0') b.push_back(i);
	}
	int res = 0;
	REP(i, (int)a.size())
		if (a[i] != b[i])
			res++;
	if ((int)a.size() != (int)b.size())
		res = -1;
	cout << res << '\n';
    return 0;
}
