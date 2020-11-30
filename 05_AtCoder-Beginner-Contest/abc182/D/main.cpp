#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll n, a, res, q, x, p;
int main() {
	cin >> n;
	while (n--)
	{
		cin >> a;
		p += a;
		q = max(q, p);
		res = max(res, x + q);
		x += p;
	}
	cout << res << '\n';
    return 0;
}
