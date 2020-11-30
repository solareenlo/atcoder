#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

	string s; cin >> s;
	int n = s.size();

	int sum = 0;
	REP(i, n)
		sum += s[i] - '0';

	if (sum % 9) cout << "No" << '\n';
	else cout << "Yes" << '\n';
    return 0;
}
