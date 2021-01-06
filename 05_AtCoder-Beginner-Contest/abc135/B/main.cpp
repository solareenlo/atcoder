#include <iostream>
#include <vector>
#include <algorithm>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int n; cin >> n;
	vector<int> p(n), c(n);
	REP(i, n) cin >> p[i];
	c = p;
	sort(p.begin(), p.end());
	int cnt = 0;
	REP(i, n)
		if (p[i] != c[i]) cnt++;
	cout << ((cnt == 2 || cnt == 0) ? "YES" : "NO") << '\n';
	return 0;
}
