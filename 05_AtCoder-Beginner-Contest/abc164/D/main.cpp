#include <bits/stdc++.h>
using namespace std;
int cnt[2019];
int n, res, now, digit;
int main() {
	string s; cin >> s;
	n = s.size();
	digit = 1;
	cnt[0] = 1;
	for (int i = n - 1; i >= 0; i--) {
		now = (now + (s[i] - '0') * digit) % 2019;
		res += cnt[now]++;
		digit = digit * 10 % 2019;
	}
	cout << res << '\n';
    return 0;
}
