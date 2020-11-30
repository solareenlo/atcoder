#include <bits/stdc++.h>
using namespace std;
using ll = long long;

template<class T>
inline set<T> divisorsList(T n) {
    set<T> div;
    for (T i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            div.insert(i);
            if (i * i != n)
                div.insert(n / i);
        }
    }
    return div;
}

int main() {
	ll s, p; cin >> s >> p;
	if (s >= p)
		cout << (s == p + 1 ? "Yes" : "No") << '\n';
	else {
		auto div = divisorsList(p);
		for (auto x : div) {
			if (x + p / x == s) {
				cout << "Yes" << '\n';
				return (0);
			}
		}
		cout << "No" << '\n';
	}
    return 0;
}
