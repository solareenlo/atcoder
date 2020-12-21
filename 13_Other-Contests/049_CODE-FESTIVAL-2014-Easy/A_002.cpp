#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	int64_t a[n];
	for (auto &x : a) cin >> x;
	int64_t diff = 0;
	for (int i = 0; i < n-1; i++)
		diff += a[i+1] - a[i];
	printf("%.10f\n", (double)diff / (n-1));
	return 0;
}
