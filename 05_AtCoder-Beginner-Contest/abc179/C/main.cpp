#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	int res = 0;
	for (int i = 1; i < n; i++)
		res += (n - 1) / i;
	cout << res << '\n';
    return 0;
}
