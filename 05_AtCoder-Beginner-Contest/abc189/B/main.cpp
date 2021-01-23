#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, x; cin >> n >> x;
	x *= 100;
	int cnt = 0, sum = 0;
	for (int i = 0; i < n; i++) {
		int v, p; cin >> v >> p;
		sum += v * p;
		if (sum <= x) cnt++;
	}
	cout << ((cnt == n) ? -1 : cnt+1) << '\n';
    return 0;
}
