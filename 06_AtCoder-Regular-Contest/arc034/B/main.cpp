#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

template<class T>
inline T cntDigit(T num) {
	T cnt = 0;

	while (num) {
		num /= 10;
		cnt++;
	}
	return cnt;
}

int main() {
    cin.tie(0)->sync_with_stdio(false);

	ll N; cin >> N;
	ll digit = cntDigit(N);

	ll tmp = N - 9 * digit;
	if (tmp < 1) tmp = 1;

	vector<ll> res;
	for (ll i = tmp; i <= N; i++) {
		string s = to_string(i);
		int n = (int)s.size();
		ll sum = 0;
		REP(j, n)
			sum += s[j] - '0';
		if (sum + i == N)
			res.push_back(i);
	}
	cout << (int)res.size() << '\n';
	for (auto x : res)
		cout << x << '\n';
    return 0;
}
