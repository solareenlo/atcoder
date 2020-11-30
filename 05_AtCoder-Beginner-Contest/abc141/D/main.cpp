#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(false);

	int n, m; cin >> n >> m;
	priority_queue<ll> a;
	REP(i, n) {
		ll tmp; cin >> tmp;
		a.push(tmp);
	}

	REP(i, m) {
		ll tmp = a.top();
		a.pop();
		a.push(tmp/2);
	}

	ll sum = 0;
	while (!a.empty()) {
		sum += a.top();
		a.pop();
	}
	cout << sum << '\n';
    return 0;
}
