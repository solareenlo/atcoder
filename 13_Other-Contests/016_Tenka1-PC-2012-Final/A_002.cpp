#include <bits/stdc++.h>
using namespace std;

int main() {
	int64_t n; cin >> n;
	int64_t f[50] = {0};
	f[1] =  1;
	for (int i = 0; i < 48; i++)
		f[i+2] = f[i] + f[i+1];
	int64_t res = 0;
	for (int i = 49; i > 0; i--) {
		res += n / f[i];
		n %= f[i];
	}
	cout << res << '\n';
	return 0;
}
