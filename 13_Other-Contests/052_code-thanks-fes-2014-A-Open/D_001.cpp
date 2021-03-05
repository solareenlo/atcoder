#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, q; cin >> n >> q;
	while (q--) {
		int a, b, s, t; cin >> a >> b >> s >> t;
		cout << 100*(t-s-max(min(b,t)-max(a,s),0)) << '\n';
	}
	return 0;
}
