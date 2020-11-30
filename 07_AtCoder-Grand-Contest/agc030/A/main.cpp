#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
	ll a, b, c; cin >> a >> b >> c;
	ll res = 0;
	if (a < c) {
		if (c - a < b) res += b + c;
		else {
			res += a;
			res += min((c - a), b) * 2;
			if (c - a > b) res++;
		}
	}
	else {
		res += c + b;
	}
	cout << res << '\n';
	return 0;
}
