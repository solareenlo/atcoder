#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(false);

	int d, t, s; cin >> d >> t >> s;

	double T = (double)d / (double)s;
	if (T <= (double)t)
		cout << "Yes" << '\n';
	else
		cout << "No" << '\n';
	return 0;
}
