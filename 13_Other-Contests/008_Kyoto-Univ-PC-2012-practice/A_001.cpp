#include <bits/stdc++.h>
using namespace std;

int64_t Ack(int64_t m, int64_t n) {
	if (m == 0) return n + 1;
	if (n == 0) return Ack(m - 1, 1);
	if (m == 1) return n + 2;
	if (m == 2) return 2 * n + 3;
	return Ack(m-1, Ack(m, n-1));
}

int main() {
	int m, n; cin >> m >> n;
	cout << Ack(m, n) << '\n';
	return 0;
}
