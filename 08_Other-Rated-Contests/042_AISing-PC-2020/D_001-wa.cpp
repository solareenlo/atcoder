#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

uint64_t popcnt(uint64_t n)
{
    uint64_t c = 0;
    c = (n & 0x5555555555555555) + ((n>>1) & 0x5555555555555555);
    c = (c & 0x3333333333333333) + ((c>>2) & 0x3333333333333333);
    c = (c & 0x0f0f0f0f0f0f0f0f) + ((c>>4) & 0x0f0f0f0f0f0f0f0f);
    c = (c & 0x00ff00ff00ff00ff) + ((c>>8) & 0x00ff00ff00ff00ff);
    c = (c & 0x0000ffff0000ffff) + ((c>>16) & 0x0000ffff0000ffff);
    c = (c & 0x00000000ffffffff) + ((c>>32) & 0x00000000ffffffff);
    return(c);
}

int main() {
	cin.tie(0)->sync_with_stdio(false);

	int n; cin >> n;
	string X; cin >> X;

	REP(i, n) {
		string t = X;
		if (X[i] == '0') t[i] = '1';
		else t[i] = '0';
		uint64_t x = stoull(t, nullptr, 2);
		ll cnt = 0;
		while (x) {
			uint64_t cnt1 = popcnt(x);
			x %= cnt1;
			cnt++;
		}
		cout << cnt << '\n';
	}
	return 0;
}
