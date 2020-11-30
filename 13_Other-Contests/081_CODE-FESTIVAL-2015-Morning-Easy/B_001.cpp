#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	string s; cin >> s;
	int res = 0;
	for (int i = 0; i < n / 2; i++)
		if (s[i] != s[i+n/2])
			res++;
	if (n % 2) res = -1;
	cout << res << '\n';
	return 0;
}
