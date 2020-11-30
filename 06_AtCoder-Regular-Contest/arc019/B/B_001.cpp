#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
int main() {
	string s; cin >> s;
	int n = s.size();
	int cnt = 0;
	REP(i, n / 2)
		cnt += s[i] != s[n - 1 - i];
	int res = n * 25;
	if (n % 2 && cnt == 0)
		res -= 25;
	if (cnt == 1)
		res -= 2;
	cout << res << '\n';
    return 0;
}
