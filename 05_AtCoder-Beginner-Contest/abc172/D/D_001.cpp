#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(false);

	int n;
	cin >> n;
	ll res = 0;
	for (int i = 1; i <= n; i++)
		for (int j = i; j <= n; j += i)
			res += j;
	cout << res << '\n';
    return 0;
}
