#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
	int k; cin >> k;
	queue<ll> q;
	REP(i, 9) q.push(i + 1);
	REP(i, k - 1) {
		ll num = q.front();
		q.pop();
		ll rem = num % 10;
		if (rem != 0)
			q.push(10 * num + rem - 1);
		q.push(10 * num + rem);
		if (rem != 9)
			q.push(10 * num + rem + 1);
	}
	cout << q.front() << '\n';
    return 0;
}
