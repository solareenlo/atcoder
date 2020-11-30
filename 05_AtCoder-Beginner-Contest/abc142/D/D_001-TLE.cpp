#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

template<class T>
set<T> divisorList(T n) {
	set<T> div;
	for (T i = 1; i <= n; i++) {
		if (n % i == 0){
			div.insert(i);
			if (i * i != n)
				div.insert(n / i);
		}
	}
	return div;
}

template<class T>
set<T> commonDivList(T a, T b) {
	set<T> aDiv = divisorList(a);
	set<T> bDiv = divisorList(b);
	set<T> res;
	set_intersection(aDiv.begin(), aDiv.end(),
			bDiv.begin(), bDiv.end(),
			inserter(res, res.end()));
	return res;
}

template<class T>
T gcd(T a, T b) {
	if (a == 0) return b;
	return gcd(b % a, a);
}

template<class T>
T commonDivNum(T a, T b) {
	T n = gcd(a, b);

	T res = 0;
	for (T i = 1; i <= sqrt(n); i++) {
		if (n % i == 0) {
			if (n / i == i) res += 1;
			else res += 2;
		}
	}
	return res;
}

int main() {
    cin.tie(0)->sync_with_stdio(false);

    ll a, b; cin >> a >> b;
    set<ll> cdl = commonDivList(a, b);
	vector<ll> common;

	for (auto x : cdl)
		common.push_back(x);

	set<ll> res;
	int n = common.size();
	REP(i, n) {
		for (int j = i + 1; j < n; j++) {
			if (commonDivNum(common[i], common[j]) != 1)
				res.insert(common[j]);
		}
	}
	cout << n - (int)res.size() << '\n';
    return 0;
}
