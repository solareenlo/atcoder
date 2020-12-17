#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k; cin >> n >> k;
	double res = 0.0;
	for (int i = 1; i <= n; i++) {
		int cnt = 0;
		while (k > i * pow(2, cnt)) cnt++;
		res += (1.0 / n) * pow(0.5, cnt);
	}
	printf("%.10f\n", res);
	return 0;
}
