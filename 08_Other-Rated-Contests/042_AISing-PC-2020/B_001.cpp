#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(false);

	int n;
	cin >> n;
	vector<int> a(n + 1);
	for (int i = 1; i <= n; i++)
		cin >> a[i];

	int cnt = 0;
	for (int i = 1; i <= n; i++)
		if (i % 2 && a[i] % 2)
			cnt++;
	cout << cnt << '\n';
	return 0;
}
