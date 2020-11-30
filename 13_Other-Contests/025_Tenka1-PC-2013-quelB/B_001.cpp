#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main () {
	ll Q, L; cin >> Q >> L;
	ll num[100000], v[100000];
	ll i, size;
	i = size = 0;
	while (Q--) {
		string s; cin >> s;
		if (s == "Push") {
			ll n, m; cin >> n >> m;
			if (size + n > L) {
				cout << "FULL" << '\n';
				return 0;
			}
			v[i] = m;
			num[i] = n;
			i++;
			size += n;
		}
		if (s == "Pop") {
			ll n; cin >> n;
			if (size < n) {
				cout << "EMPTY" << '\n';
				return 0;
			}
			size -= n;
			while (n > 0) {
				if (num[i - 1] > n) {
					num[i - 1] -= n;
					break ;
				}
				n -= num[--i];
			}
		}
		if (s == "Top") {
			if (size == 0) {
				cout << "EMPTY" << '\n';
				return 0;
			}
			cout << v[i - 1] << '\n';
		}
		if (s == "Size")
			cout << size << '\n';
	}
	cout << "SAFE" << '\n';
	return 0;
}
