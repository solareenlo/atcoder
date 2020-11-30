#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

	string s; cin >> s;
	int n = s.size();

	map<char, int> alpha;
	REP(i, n)
		alpha[s[i]]++;

	int odd = 0;
	for (auto x : alpha) {
		if (x.second % 2)
			odd++;
	}

	if (odd == 0)
		cout << n << '\n';
	else
		cout << 2 * ((n - odd) / (2 * odd)) + 1 << '\n';
    return 0;
}
