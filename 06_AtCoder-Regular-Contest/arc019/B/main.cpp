#include <bits/stdc++.h>
using namespace std;

int main() {
	string s; cin >> s;
	int n = s.size();
	int cnt = 0;
	for (int i = 0; i < n / 2; i++)
		cnt += (s[i] != s[n - 1 - i]);
	int res = 25 * n;
	if (cnt == 1)
		res -= 2;
	if (cnt == 0 && n % 2)
		res -= 25;
	cout << res << '\n';
	return 0;
}
