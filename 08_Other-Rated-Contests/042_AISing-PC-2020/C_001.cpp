#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(false);

	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		int cnt = 0;
		for (int x = 1; x <= sqrt(n); x++) {
			for (int y = 1; y <= sqrt(n); y++) {
				double d = sqrt(-2*x*y -3*pow(x,2) -3*pow(y,2) +4*i);
				if (floor(d) == d) {
					double z = (-x-y+d)/2;
					if (floor(z) == z && z > 0) {
						if (pow(x, 2) + pow(y, 2) + pow(z, 2) + x*y + y*z + z*x == i)
							cnt++;
					}
				}
			}
		}
		cout << cnt << '\n';
	}
	return 0;
}
