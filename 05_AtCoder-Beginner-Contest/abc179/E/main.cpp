#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	ll n, x, m; cin >> n >> x >> m;
	vector<ll> cnt;
	ll rem = x;
	ll tmp = m;
	while (tmp--) {
		cnt.push_back(rem);
		rem = rem * rem % m;
		if (find(cnt.begin(), cnt.end(), rem) != cnt.end())
			break ;
	}
	ll mae = distance(cnt.begin(), find(cnt.begin(), cnt.end(), rem));
	ll maeSUM = accumulate(cnt.begin(), cnt.begin() + mae, 0LL);
	ll loop = cnt.size() - mae;
	ll loopSUM = accumulate(cnt.begin() + mae, cnt.end(), 0LL);
	ll res = maeSUM;
	n -= mae;
	ll div = n / loop;
	ll mod = n % loop;
	res += loopSUM * div;
	res += accumulate(cnt.begin() + mae, cnt.begin() + mae + mod, 0LL);
	cout << res << '\n';
    return 0;
}
