#include <bits/stdc++.h>
using namespace std;
int main() {
	int n; cin >> n;
	int m = (n % 2) ? n : n + 1;
	cout << (n * (n - 1) / 2) - (n / 2) << '\n';
	for (int i = 1; i <= n; i++)
		for (int j = i + 1; j <= n; j++)
			if (i + j != m)
				cout << i << " " << j << '\n';
	return 0;
}
