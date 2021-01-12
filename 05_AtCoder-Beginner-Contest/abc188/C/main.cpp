#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	int a[1 << n];
	for (auto &x : a) cin >> x;
	int half = 1 << (n - 1);
	int maxi = max_element(a, a+(1<<n)) - a;
	auto start = maxi < half ? a + half : a;
	cout << (int)(max_element(start, start+half) - a) + 1 << '\n';
	return 0;
}
